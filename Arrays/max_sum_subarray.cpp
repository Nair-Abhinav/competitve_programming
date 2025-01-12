#include <bits/stdc++.h>
using namespace std;

// int max_sum_subarray_brutforce_TC_On3(int arr[], int n)
// {
//     int max = INT_MIN;
//     for (int start = 0; start < n; start++)
//     {
//         for (int end = start; end < n; end++)
//         {
//             int sum = 0;
//             for (int i = start; i <= end; i++)
//             {
//                 sum += arr[i];
//             }
//             if (sum > max)
//             {
//                 max = sum;
//             }
//         }
//     }
//     return max;
// }

// 

// kadanes algo
int maxSubArray(int arr[], int n) {
        int max = INT_MIN;
        int current_sum =0 ;
        for(int i=0;i<n;i++){
            current_sum += arr[i];
            if(current_sum > max){
                max = current_sum;
            }
            if(current_sum < 0){
                current_sum = 0;
            }
        }
        return max;
    }

// divide and conquer
// int maxSubArray(int arr[] , int start , int end){
//     if(start == end){
//         return arr[start];
//     }
//     int max = INT_MIN;
//     int mid = (start+end)/2;
//     int s1 = maxSubArray(arr , start , mid);
//     int s2 = maxSubArray(arr , mid+1 , end);
//     int s3 = s1+s2;
//     if(max < s3){
//         max = s3;
//     }
//     return max; 
// }
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    // int res = max_sum_subarray_brutforce_TC_On3(arr, n);
    // int res = max_sum_subarray_brutforce_TC_On2(arr, n);
    int res = maxSubArray(arr,n);
    return res;
}