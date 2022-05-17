//Problem: Find the maximum and minimum element of array 

#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> arr;
    int num, n, i;
    cout << "Enter number of elements : ";
    cin >> n;
    cout << "Enter array elements : " << endl;
    for(i = 0; i < n; i++) {
        cin >> num;
        arr.push_back(num);
    }    
    int maxNo = arr[0], minNo = arr[0];
    for(auto i: arr) {
        maxNo = max(maxNo, i);
        minNo = min(minNo, i);
    }
    cout << "Maximum element of array : " << maxNo << endl;
    cout << "Minimum element of array : " << minNo << endl;

    return 0;
}