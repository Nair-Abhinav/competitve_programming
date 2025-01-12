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
int maxSubArray(vector<int>& nums) {
        int max = INT_MIN;
        int current_sum =0 ;
        for(int i=0;i<nums.size();i++){
            current_sum += nums[i];
            if(current_sum > max){
                max = current_sum;
            }
            if(current_sum < 0){
                current_sum = 0;
            }
        }
        return max;
    }

int main()
{
    int n;
    cout << "Enter the number of elements in the array: ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    // int res = max_sum_subarray_brutforce_TC_On3(arr, n);
    // int res = max_sum_subarray_brutforce_TC_On2(arr, n);
    int res = maxSubArray(arr);
    cout << "The maximum sum of the subarray is: " << res;
    return 0;
}