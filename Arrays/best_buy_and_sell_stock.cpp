#include<bits/stdc++.h>
using namespace std;

int buy_sell_stock(int arr[] , int n){
    vector<int> ans;
    int best_buy = arr[0];
    int max_profit = 0;
    for (int i = 1; i < n; i++)
    {
        if(arr[i] > best_buy){
            max_profit = max(max_profit , arr[i] - best_buy);
        }
        else{
            best_buy = min(best_buy , arr[i]);
        }
    }
    return max_profit;
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
    int max = buy_sell_stock(arr , n);
    cout<<"The maximum profit is: "<<max;
    return 0;
}