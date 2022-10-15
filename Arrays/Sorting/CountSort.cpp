//Count Sort Implementation
//Name : Akashdeep-k

#include <bits/stdc++>
using namespace std;

void countSort(int arr[], int s, int e){
    int max = arr[s];
    for (int i = s+1; i <= e; i++)
    {
        if(arr[i] > max)
        max = arr[i];
    }

    int freq[max+1] = {0};
    for (int i = s; i <= e; i++)
    {
        freq[arr[i]]++;
    }

    for (int i = 1; i <= max; i++)
    {
        freq[i] += freq[i-1];
    }
    
    int output[e+1];
    for (int i = e; i >= s; i--)
    {
        output[s + (--freq[arr[i]])] = arr[i];
    }

    for (int i = s; i <= e; i++)
    {
        arr[i] = output[i];
    }
}
int32_t main()
{
    
    return 0;
}