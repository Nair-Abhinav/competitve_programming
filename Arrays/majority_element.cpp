#include<bits/stdc++.h>
using namespace std;

int majority_element(int arr[] , int n){
    int freq=0,ans=0;
    for (int i = 0; i < n; i++)
    {
        if(freq == 0){
            ans = arr[i];
        }
        if (ans == arr[i])
        {
            freq++;
        }
        else{
            freq--;
        }
    }
    if(ans > floor(n/2)){
        return ans;
    }else{
        return -1;
    }
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int res = majority_element(arr , n);
    cout<<res;
}