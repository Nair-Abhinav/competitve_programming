#include<bits/stdc++.h>
using namespace std;

void intersection_2_sorted_arr(int arr1[] ,int arr2[] , int n , int m){
    vector<int> intersection_vec;  
    int i=0 , j=0;
    while (i<n && j<m){
        if(arr1[i] < arr2[j])
            i++;
        else if(arr1[i]>arr2[j])
            j++;
        else{
            intersection_vec.push_back(arr1[i]);
            i++;
            j++;
        }
    }
    cout<<"The intersection of the two arrays is: ";
    for(int num : intersection_vec){
        cout<<num<<" ";
    }
}

int main(){
    int n,m;
    cout<<"Enter the number of elements in the first array: ";
    cin>>n;
    int arr1[n];
    cout<<"Enter the elements of the first array: ";
    for(int i=0;i<n;i++){
        cin>>arr1[i];
    }
    cout<<"Enter the number of elements in the second array: ";
    cin>>m;
    int arr2[m];
    cout<<"Enter the elements of the second array: ";
    for(int i=0;i<m;i++){
        cin>>arr2[i];
    }
    intersection_2_sorted_arr(arr1 , arr2 , n , m);
    return 0;
}