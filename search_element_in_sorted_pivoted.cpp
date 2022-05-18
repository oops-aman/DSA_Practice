// Problem: Search an element in sorted and pivoted array

#include<bits/stdc++.h>
using namespace std;

int searchElement(vector<int> arr, int l, int h, int key)
{
    if(l > h)
        return -1;

    int mid = (l+h)/2;
    if(arr[mid] == key) {
        return mid;
    }

    if(arr[l] <= arr[mid]) {
        if(key >= arr[l] && key <= arr[mid]) {
            return searchElement(arr, 0, mid-1, key);
        }
        return searchElement(arr, mid+1, h, key);
    }

    if(key >= arr[mid] && key <= arr[h]) {
        return searchElement(arr, mid+1, h,key);
    }
    return searchElement(arr, 0, mid-1, key);
}

int main()
{
    int n,i;
    cout << "Enter number of elements : ";
    cin >> n;
    vector<int> arr(n);
    cout << "Enter array elements : " << endl;
    for(i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cout << "Enter element to search : ";
    int key;
    cin >> key;

    int index = searchElement(arr, 0, n-1, key);

    if(index != -1) {
        cout << "Element found at index : " << index;
    } else {
        cout << "Element not found.";
    }

    return 0;
}