#include <bits/stdc++.h>
using namespace std;

// function to swap elements
void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void max_heapify(int arr[], int size, int i) // Time complexity = O(logn)
{
    int largest = i;
    int left_child = 2 * i + 1;
    int right_child = 2 * i + 2;
    if (left_child < size && arr[left_child] > arr[largest])
        largest = left_child;
    if (right_child < size && arr[right_child] > arr[largest])
        largest = right_child;
    if (largest != i)
    {
        swap(&arr[i], &arr[largest]);
        max_heapify(arr, size, largest);
    }
}

void build_max_heap(int arr[], int size) // Time complexity = O(nlogn)
{
    for (int i = floor(size / 2); i >= 0; i--)
        max_heapify(arr, size, i);
}

void heapsort(int arr[], int size)
{
    build_max_heap(arr, size);
    for (int i = size - 1; i >= 0; i--)
    {
        swap(&arr[0], &arr[i]);
        max_heapify(arr, i, 0);
    }
}

void display(int arr[], int size)
{
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";
}

int main()
{
    int size;
    cout << "\nEnter the number of elements \n>> ";
    cin >> size;
    int arr[size];
    cout << "\nEnter the array : ";
    for (int i = 0; i < size; i++)
        cin >> arr[i];
    cout << "Sorted array is : ";
    heapsort(arr, size);
    display(arr, size);
}
