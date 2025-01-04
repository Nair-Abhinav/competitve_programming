// print name N times using recursion
#include<bits/stdc++.h>
using namespace std;

int printName(int n , string name){
    if(n <= 1){
        return 0;
    }
    printName(n-1 , name);
    cout<<name<<endl;
}

void linearnly1toN(int n , int start){
    if(start > n){
        return;
    }
    cout<<start<<endl;
    linearnly1toN(n , start+1);
}

void printNto1(int n){
    if(n==0){
        return;
    }
    cout<<n<<endl;
    printNto1(n-1);
}

void linearnly1toNbyBacktracking(int n){
    if(n==0){
        return;
    }
    linearnly1toNbyBacktracking(n-1);
    cout<<n<<endl;
}

void printNto1byBacktracking(int n  , int i){
    if(n < i){
        return;
    }
    printNto1byBacktracking(n , i+1);
    cout<<i<<endl;
}
int main(){
    linearnly1toN(10,1);
    printNto1(10);
    linearnly1toNbyBacktracking(10);
    printNto1byBacktracking(10 , 1);
}