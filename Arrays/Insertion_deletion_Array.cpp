#include <bits/stdc++.h>
using namespace std;

void insert (int arr[], int n,int x int pos)
{
    for(int i = n-1; i>=pos;i--)
      arr[i+1] = arr[i];
    arr[pos]=x;
}
int deleteEl (int arr[],int n,int pos){
    if(pos==-1){
        cout<<"Element not found";
        return n;
    }
    for(int i=pos;i<n-1;i++){
        arr[i] = arr[i+1];
    }
    return n-1;
}

int32_t main()
{
    int arr = {2,3,4};
    int n = arr.length;
    int x = 5,pos=2;
    insert(arr,n,x,pos);
    n++;
    n = deleteEl(arr,n,1)
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }


    return 0;
}