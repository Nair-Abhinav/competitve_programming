#include<bits/stdc++.h>
using namespace std;

void swap(int &a , int &b){
    int temp = a;
    a = b;
    b = temp;
}

void move_zeroes_at_end(int arr[] , int n){
    int j = -1;
    for(int i=0;i<n;i++){
        if(arr[i] != 0){
            j++;
            swap(arr[i] , arr[j]);
        }
    }
    cout<<"The array after moving all zeroes to the end is: ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}


int main(){
    int n;
    cout<<"Enter the number of elements in the array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of the array: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    move_zeroes_at_end(arr ,n);
    return 0;
}