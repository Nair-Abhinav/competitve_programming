#include<bits/stdc++.h>
using namespace std;

void left_rotate_by_1(int arr[] , int n){
    int temp = arr[0];
    for(int i=1;i<n;i++){
        arr[i-1] = arr[i];
    }
    arr[n-1] = temp;
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
    left_rotate_by_1(arr , n);
    cout<<"The array after left rotation by 1 place is: ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}