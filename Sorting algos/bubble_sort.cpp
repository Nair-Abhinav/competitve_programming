#include<bits/stdc++.h>
using namespace std;

// bubble sort function --> O(n^2)
// brute force approach
void bubble_sort(int arr[] , int n){
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n-1; j++)
        {
            if (arr[j] > arr[j+1])
            {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    cout<<"Sorted array: ";
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
}
//better approach:
void bubble_sort_better_approach(int arr[] , int n){
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n-1-i; j++)
        {
            if (arr[j] > arr[j+1])
            {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    cout<<"Sorted array: ";
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
}

// optimal approach:
void bubble_sort_optimal(int arr[] , int n){
    for (int i = 0; i < n; i++)
    {
        bool swapped = false;
        for (int j = 0; j < n-1; j++)
        {
            if(arr[j] > arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                swapped = true;
            }
        }
        if (swapped == false)
        {
            break;
        }
    }
    cout<<"Sorted array: ";
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
}

int main(){
    int n;
    cout<<"Enter the number of elements: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements: ";
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    bubble_sort(arr, n);
    bubble_sort_better_approach(arr, n);
    bubble_sort_optimal(arr, n);
}