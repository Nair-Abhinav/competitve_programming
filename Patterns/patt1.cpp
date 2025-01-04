#include<bits/stdc++.h>
using namespace std;

// void printPatt1(int n){
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < n; j++)
//         {
//             cout<<"*";
//         }
//         cout<<endl;
//     }
// }
void alphaHill(int n) {
    // Write your code here.
    for(int i=0;i<n;i++){
        //spaces
        for(int j=0;j<n-i-1;j++){
            cout<<" ";
        }
        short k=65;
        short breakpoint = (2*i + 1)/2;
        //characters
        for(int j=1;j<=2*i+1;j++){
            cout<<char(k);
            if(j<=breakpoint){                
                k++;
            }
            else k--;
        }
        //spaces
        for(int j=0;j<n-i-1;j++){
            cout<<" ";
        }
        cout<<endl;
    }
}

int main(){
    
    int t;
    cout<<"Enter number of test cases:"<<endl;
    cin>>t;
    for (int i = 0; i < t; i++)
    {
        int n;
        cin>>n;
        alphaHill(n);
    }
}