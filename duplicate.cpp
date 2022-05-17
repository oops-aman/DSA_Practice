//Problem: Given an array, return true if any value appears atleast twice in the array,
// return false if all elements are distinct

#include<bits/stdc++.h>
using namespace std;

bool isDuplicate(vector<int> arr, int n)
{
    int i;
    sort(arr.begin(), arr.end());
    for(i = 1; i < n; i++)
    {
        if(arr[i] == arr[i-1]) 
            return true;
    }
    return false;
}

int main() 
{
    int n, i;
    cout << "Enter array of elements : ";
    cin >> n;
    vector<int> arr(n);
    cout << "Enter array elements : " << endl;
    for(i = 0; i < n; i++) {
        cin >> arr[i];
    }

    bool res = isDuplicate(arr, n);
    if(res)
        cout << "Array contains duplicate elements";
    else
        cout << "Array contains distinct elements";
    
    return 0;
}