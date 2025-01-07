#include<bits/stdc++.h>
using namespace std;

void union_2_sorted_arr(int arr1[], int arr2[], int n, int m) {
    int i = 0, j = 0;
    vector<int> union_vec;

    while (i < n && j < m) {
        // Skip duplicates in arr1
        if (i > 0 && arr1[i] == arr1[i - 1]) {
            i++;
            continue;
        }
        // Skip duplicates in arr2
        if (j > 0 && arr2[j] == arr2[j - 1]) {
            j++;
            continue;
        }
        // Compare and add the smaller element
        if (arr1[i] < arr2[j]) {
            union_vec.push_back(arr1[i]);
            i++;
        } else if (arr1[i] > arr2[j]) {
            union_vec.push_back(arr2[j]);
            j++;
        } else {
            // If elements are equal, add one and skip both
            union_vec.push_back(arr1[i]);
            i++;
            j++;
        }
    }
    // remaining elements in arr1
    while (i < n) {
        if (i > 0 && arr1[i] == arr1[i - 1]) {
            i++;
            continue;
        }
        union_vec.push_back(arr1[i]);
        i++;
    }
    // remaining elements in arr2
    while (j < m) {
        if (j > 0 && arr2[j] == arr2[j - 1]) {
            j++;
            continue;
        }
        union_vec.push_back(arr2[j]);
        j++;
    }
    cout << "The union of the two arrays is: ";
    for (int num : union_vec) {
        cout << num << " ";
    }
    cout << endl;
}

int main() {
    int n, m;
    cout << "Enter the number of elements in the first array: ";
    cin >> n;
    cout << "Enter the number of elements in the second array: ";
    cin >> m;
    int arr1[n], arr2[m];
    cout << "Enter the elements of the first array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr1[i];
    }
    cout << "Enter the elements of the second array: ";
    for (int i = 0; i < m; i++) {
        cin >> arr2[i];
    }
    union_2_sorted_arr(arr1, arr2, n, m);
    return 0;
}
