#include<bits/stdc++.h>
using namespace std;

vector<int> pair_sum (int arr[] , int n , int sum){
    int i = 0;
    int j = n-1;
    vector<int> ans;
    while(i<j){
        if(arr[i]+arr[j] == sum){
            ans.push_back(i);
            ans.push_back(j);
            return ans;
        }
        else if(arr[i]+arr[j] < sum){
            i++;
        }
        else{
            j--;
        }
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
    int sum;
    cout<<"Enter the sum: ";
    cin>>sum;
    vector<int> res = pair_sum(arr , n , sum);
    cout<<"The pair is: "<<res[0]<<" "<<res[1];
}