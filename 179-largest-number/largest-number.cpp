#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string largestNumber(vector<int>& nums) {
        
        vector<string> arr;
        for (int i = 0; i < nums.size(); i++) {
        string temp = to_string(nums[i]);
        arr.push_back(temp);               
          }

    
        sort(arr.begin(), arr.end(), [](string &a, string &b) {
            return a + b > b + a;  // largest number comes first
        });

        
        if (arr[0] == "0") return "0";

        
        string result = "";
        for (string &s : arr)
            result += s;

        return result;
    }
};
