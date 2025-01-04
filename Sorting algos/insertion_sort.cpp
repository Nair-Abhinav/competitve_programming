#include<bits/stdc++.h>
using namespace std;

// insertion sort function

void insertion_sort(int arr[] , int n){
    for(int i=1 ; i<n ; i++){
        int current = arr[i];
        int j = i-1;
        cout<<arr[i]<<" "<<endl;
        cout<<arr[j]<<" "<<endl;

        while(arr[j] > current && j>=0){
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = current;
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
    insertion_sort(arr , n);
}