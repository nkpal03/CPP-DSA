#include <stdio.h>
#include <stdlib.h>

/*
     Nlogn time
a array which is contianing 8 element we have to apply merge sort on that
there is an array containing 8 lists. Every single element is a list and it ecah list already sorted because it is 
has only one element . Two way mergeing , we take two list and merge them after this we take two two element 
containing list and merge them . passes - logn

what merge sort d
*/


void merge(int A[],int l,int h,int mid){
	int i=l,j=mid+1,k=l;
	int B[20];
	
	while(i<=mid && j<=h){
		if(A[i]<A[j])
			B[k++]=A[i++];
		else
			B[k++]=A[j++];
	}
	for(;i<=mid;i++)
		B[k++]=A[i];
	for(;j<=h;j++)
		B[k++]=A[j];
		
	for(i=l;i<=h;i++){
		A[i]=B[i];
	}
}

void Imerge(int A[],int n){
	
	int p,l,h,mid,i;
	for(p=2;p<=n;p=p*2){  // this for loop is for passes we have total 3 passes 
		for(i=0;i+p-1<n;i=i+p){ // this for loop is for taking the lists
			l=i;
			h=i+p-1;
			mid=(l+h)/2;
			merge(A,l,h,mid);
		}
	}
	if(p/2<n)
		merge(A,0,n-1,p/2);
} 

//recursive method 
//merge sort uses extra space . space complexity - array A(n) and it uses auxilary array B + it uses memory 
//in stack because of recursion - logn , so total memory 2n + logn
void Rmerge(int A[],int l,int h){
	int mid;
	if(l<h){
		mid=(l+h)/2;
		Rmerge(A,l,mid);
		Rmerge(A,mid+1,h);
		merge(A,l,h,mid);
	}
}

int main(){

int A[]={5,3,7,9,6,1,4,10},n=8;
	Rmerge(A,0,n-1);
	for(int i=0;i<n-1;i++){
		printf("%d  ",A[i]);
		
	}
	printf("\n");	
	return 0;
}

