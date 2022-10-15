//Insertion Sort Implementation
//Name : Akashdeep-k

#include <bits/stdc++.h>
using namespace std;

void Insertion_Sort(int arr[], int n)
{
    for (int i = 1; i < n; i++)
    {
        int temp = arr[i];
        int j;
        for (j = i-1; j >= 0; j--)
        {
            if(arr[j] > temp){
                arr[j+1] = arr[j];
            }
            else{
                break;
            }
        }
        arr[j+1] = temp;
    }
}
int32_t main()
{

    return 0;
}