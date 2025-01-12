#include<bits/stdc++.h>
using namespace std;

double power_x_n(double x, int n){

    // corner cases
    if(n==0){
        return 1.0;
    }
    if (x==0)
    {
        return 0.0;
    }
    
    long binaryFormat = n;
    if(n<0){
        x = 1/x;
        binaryFormat= -binaryFormat;
    }
    double ans = 1;
    while (binaryFormat > 0)
    {
        if(binaryFormat % 2 == 1){
            ans = ans*x;
        }
        x = x*x;
        binaryFormat = binaryFormat/2;
    }
    return ans;
}

int main(){
    double n;
    cin>>n;
    int i;
    cin>>i;
    cout<<power_x_n(n,i);
}