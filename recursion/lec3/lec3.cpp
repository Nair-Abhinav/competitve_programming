#include<bits/stdc++.h>
using namespace std;

int a[] = {1,2,3,4,5};

void reverse_array(int a[] , int i , int n){
    if(i>=n/2){
        return;
    }
    int temp = a[i];
    a[i] = a[n-i-1];
    a[n-i-1] = temp;
    reverse_array(a , i+1 , n);
}

int main(){
    reverse_array(a , 0 , 5);
    for(int i = 0 ; i < 5 ; i++){
        cout<<a[i]<<" ";
    }
}