#include <bits/stdc++.h>
using namespace std;
//136. Single Number
//https://leetcode.com/problems/single-number/description/


     int singleNumber(vector<int>& arr) {
        int n = arr.size(); // taking the size of the array 
        
        unordered_map<int, int> mp; // unordered map to store the frequency
        
        // storing frequency in the map
        for(int i = 0; i < n; i++)
        {
            mp[arr[i]]++;
        }
        
        int ans; // variable to store  answer
        for(auto x: mp) // traverse from the map
        {
            if(x.second == 1) //if frequency of any element is 1
            {
                ans = x.first; // store in answer
                break; // break the loop, as we got our answer now
            }
        }
        
        return ans; // return ans
    }


int main()
{
    int n,i;
    cout << "Enter number of elements : ";
    
    vector<int> arr(n);
    cout << "Enter array elements : ";
    for(i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int res = singleNumber(arr);
    cout << "Element present only once : " << res;

    return 0;
}