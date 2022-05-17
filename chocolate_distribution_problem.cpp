/* Given an array A[ ] of positive integers of size N, where each value represents the number of chocolates 
in a packet.  Each packet can have a variable number of chocolates. There are M students, the task is to distribute 
chocolate packets among M students such that :
1. Each student gets exactly one packet.
2. The difference between maximum number of chocolates given to a student 
   and minimum number of chocolates given to a student is minimum. */

#include<bits/stdc++.h>
using namespace std;

int findMinDiff(vector<int> arr, int n, int m)
{
    int i;
    int minDiff = INT_MAX;
    if(n == 0 || m == 0)
        return 0;
    else if(n < m)
        return -1;
    else {
        sort(arr.begin(), arr.end());
        for(i = 0; i < n; i++) {
            minDiff = min(minDiff, (arr[i+m-1] - arr[i]));
        }
    }
    return minDiff;
}

int main()
{
    int n, i, m;
    cout << "Enter number of packets : ";
    cin >> n;
    vector<int> arr(n);
    cout << "Enter number of chocolates in each packet : " << endl;
    for(i = 0; i < n; i++)
        cin >> arr[i];
    
    cout << "Enter number of students : ";
    cin >> m;
    int res = findMinDiff(arr, n, m);
    cout << "Minimum difference is : " << res;
}