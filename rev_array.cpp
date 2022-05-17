// Problem: Reversing an array

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int i;
    int n;
    cout << "Enter number of elements : ";
    cin >> n;
    vector<int> arr(n);

    cout << "Enter array elements : " << endl;
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int first = 0, last = n - 1;
    while (first < last)
    {
        int temp = arr[first];
        arr[first] = arr[last];
        arr[last] = temp;
        first++;
        last--;
    }

    cout << "Array after reversing : " << endl;
    for(auto i: arr) {
        cout << i << " ";
    }

    return 0;
}