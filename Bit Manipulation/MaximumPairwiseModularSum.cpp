#include "bits/stdc++.h"
using namespace std;

int print2largest(int arr[], int arr_size)
{
    int i, first, second;

    first = second = INT_MIN;
    for (i = 0; i < arr_size; i++)
    {
        /* If current element is greater than first
           then update both first and second */
        if (arr[i] > first)
        {
            second = first;
            first = arr[i];
        }

        /* If arr[i] is in between first and
           second then update second  */
        else if (arr[i] > second && arr[i] != first)
            second = arr[i];
    }
    return second;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int m;
        cin >> m;
        int arr[n];
        int m1 = INT_MIN;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            m1 = max(m1, arr[i]);
        }
        if (n == 1)
            cout << 2 * arr[0] << endl;
        else
        {
            int sec = print2largest(arr, n);
            int d = m - (abs(sec - m1) % m);
            int f = abs(sec - m1) % m;
            int g = max(d, f);
            cout << max(sec + m1 + g,2*m1) << endl;
        }
    }
}
