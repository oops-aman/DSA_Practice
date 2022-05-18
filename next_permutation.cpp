// Problem: Given an array of integers nums, find the next permutation of nums.
// The next permutation of an array of integers is the next lexicographically greater permutation of
// its integer. More formally, if all the permutations of the array are sorted in one container according
// to their lexicographical order, then the next permutation of that array is the permutation that follows
// it in the sorted container.

#include <bits/stdc++.h>
using namespace std;

vector<int> nextPermutation(vector<int> arr, int n)
{
    int i = 1;
    int lastHigh = -1;
    // Find the peak with least weightage
    while (i < n)
    {
        if (arr[i] > arr[i - 1])
            lastHigh = i;

        i += 1;
    }
    // if array is in descending order
    if (lastHigh == -1)
    {
        for (i = 0; i < n / 2; i++)
        {
            swap(arr[i], arr[n - i - 1]);
            return arr;
        }
    }

    // calculating next permutation
    int var = arr[lastHigh];
    int index = lastHigh;
    for (i = lastHigh; i < n; i++)
    {
        if (arr[i] > arr[lastHigh - 1] && arr[i] < arr[index])
        {
            index = i;
        }
    }
    swap(arr[lastHigh - 1], arr[index]);
    sort(arr.begin() + lastHigh, arr.end());
    return arr;
}

int main()
{
    int n, i;
    cout << "Enter the number of elements : ";
    cin >> n;
    vector<int> arr(n);
    cout << "Enter array elements : " << endl;
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    vector<int> out = nextPermutation(arr, n);
    cout << "Next Permutation is : ";
    for (auto i : out)
        cout << i << " ";
    return 0;
}