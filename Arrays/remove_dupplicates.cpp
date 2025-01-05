#include<bits/stdc++.h>
using namespace std;

int remove_duplicates(int arr[] , int n){
    int i=0,j=1;
    while (i<n && j<n)
    {
        if(arr[i]!=arr[j]){
            arr[i+1] = arr[j];
            i++;
        }
        j++;
    }
    return i+1;
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
    int len = remove_duplicates(arr , n);
    cout<<"The length of the array after removing duplicates is: "<<len;
    return 0;
}