//Merge Sort Implementation
//Name : Akashdeep-k

#include <bits/stdc++.h>
using namespace std;

void merge(int arr[], int s, int mid, int e){
    int i = s;
    int j = mid+1;
    int k = s;
    int brr[e+1];
    while((i<=mid)&&(j<=e)){
        if(arr[i] < arr[j]){
            brr[k++] = arr[i++];
        }
        else{
            brr[k++] = arr[j++];
        }
    }
    while(i<=mid){
        brr[k++] = arr[i++];
    }
    while(j<=e){
        brr[k++] = arr[j++];
    }
    for (int i = s; i <= e; i++)
    {
        arr[i] = brr[i];
    }
    
}
void merge_sort(int arr[], int s, int e){
    if(s<e){
        int mid = s + (e-s)/2;
        merge_sort(arr, s, mid);
        merge_sort(arr, mid+1, e);
        merge(arr, s, mid, e);
    }
}
int32_t main()
{
    
    return 0;
}