#include<bits/stdc++.h>
using namespace std;

int sumOfNNaturalNumbers(int n , int i , int sum){
    if(n==0){
        return sum;
    }
    sumOfNNaturalNumbers(n-1 , i+1 , sum+i);
}

int main(){
    cout<<sumOfNNaturalNumbers(10 , 1 , 0);
}