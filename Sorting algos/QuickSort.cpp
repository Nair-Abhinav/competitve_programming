#include<bits/stdc++.h>
using namespace std;
int arr[10];

int partition(int arr[] , int start , int end){
    int pivot = arr[start];
    int i=start;
    int j=end;
    while(i<j){
        while(pivot >= arr[i] && i<end){
            i++;
        }
        while(pivot < arr[j] && j>start){
            j--;
        }
        if(i<j){
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }
    int temp = arr[j];
    arr[j] = arr[start];
    arr[start] = temp;
    return j;
}

// quick sort function
void quickSort(int arr[] , int start , int end){
    if(start>=end){
        return;
    }
    else{
        int pivot = partition(arr , start , end);
        quickSort(arr , start , pivot-1);
        quickSort(arr , pivot+1 , end);
    }
}

int main(){
    int n;
    cout<<"Enter the number of elements in the array: ";
    cin>>n;
    cout<<"Enter the elements of the array: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    quickSort(arr , 0 , n-1);
    cout<<"The sorted array is: ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}