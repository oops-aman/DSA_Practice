//Problem: Reversing an array

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, i, num;
    cout << "Enter number of elements : ";
    cin >> n;
    vector<int> arr(n), revArr(n);
    cout << "Enter array elements : ";
    for(i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int k = n-1;
    for(i = 0; i < n; i++) {
        revArr[i] = arr[k];
        k--;
    }
    cout << "Array after reversing : ";
    for(auto i: revArr) 
        cout << i << " ";

    return 0;
}