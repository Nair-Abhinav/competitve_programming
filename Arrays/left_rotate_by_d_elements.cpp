#include<bits/stdc++.h>
using namespace std;

void left_rotate_by_d(int arr[] , int n , int d){
    d = d % n;
    int temp[d];
    for(int i=0;i<d;i++){
        temp[i] = arr[i];
    }

    for(int i=d;i<n;i++){
        arr[i-d] = arr[i];
    }

    for (int i = n-d; i < n; i++)
    {
        arr[i] = temp[i-(n-d)];
    }
    
    cout<<"The array after left rotation by "<<d<<" places is: ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    int n,d;
    cout<<"Enter the number of elements in the array: ";
    cin>>n;
    cout<<"Enter the number of elements by which you want to rotate the array: ";
    cin>>d;
    int arr[n];
    cout<<"Enter the elements of the array: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    left_rotate_by_d(arr ,n, d);
    return 0;
}