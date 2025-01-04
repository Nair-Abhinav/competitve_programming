#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"Enter the number of elements in the array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of the array: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    // 1st traversal
    int max = arr[0];
    for(int i=1;i<n;i++){
        if(arr[i]>max){
            max = arr[i];
        }
    }

    // 2nd traversal
    int second_max = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if(arr[i] > second_max && arr[i] != max){
            second_max = arr[i];
        }
    }
    printf("The second largest element in the array is: %d", second_max);
    return 0;
}