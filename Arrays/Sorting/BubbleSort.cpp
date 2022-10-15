//Bubble Sort Implementation
//Name : Akashdeep-k

#include <bits/stdc++.h>
using namespace std;

void Bubble_Sort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++) // Sorting
    {
        int flag = 0;
        for (int j = 0; j < n - 1 - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                flag = 1;
            }
        }
        if (flag == 0)
        {
            break;
        }
    }
}
int32_t main()
{

    return 0;
}