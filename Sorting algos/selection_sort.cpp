#include <bits/stdc++.h>
using namespace std;

// swap function
int *swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

// selection sort function
void selection_sort(int arr[] , int n){
    for (int i = 0; i < n; i++)
    {
        int min_index = i;
        for (int j = i+1; j < n; j++)
        {
            if (arr[j] < arr[min_index])
            {
                min_index = j;
            }
        }
        swap(arr[i], arr[min_index]);
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
    selection_sort(arr, n);
    return 0;
}