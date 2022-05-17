//Problem: Maximum sum subarray using Kadane's Algorithm

#include<bits/stdc++.h>
using namespace std;

int maximumSubarray(vector<int> arr, int n)
{
    int i;
    int curSum = 0;
    int maxSum = INT_MIN;

    for(i = 0; i < n; i++) {
        curSum = curSum + arr[i];

        if(curSum > maxSum) {
            maxSum = curSum;
        }

        if(curSum < 0) {
            curSum = 0;
        }
    }
    return maxSum;
}

int main()
{
    int n, i;
    cout << "Enter number of elements : ";
    cin >> n;
    vector<int> arr(n);
    cout << "Enter array elements : ";
    for(i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int res = maximumSubarray(arr, n);
    cout << "Maximum sum of subarray : " << res;

    return 0;
}