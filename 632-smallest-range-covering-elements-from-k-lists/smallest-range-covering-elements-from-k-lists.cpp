#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> smallestRange(vector<vector<int>>& nums) {
        using T = tuple<int,int,int>; // {value, list_idx, element_idx}
        priority_queue<T, vector<T>, greater<T>> minHeap;
        
        int current_max = INT_MIN;
        
        // Step 1: Push first element from each list
        for (int i = 0; i < nums.size(); i++) {
            minHeap.push({nums[i][0], i, 0});
            current_max = max(current_max, nums[i][0]);
        }
        
        int range_start = 0, range_end = INT_MAX;
        
        // Step 2: Process heap
        while (true) {
            auto [val, list_idx, elem_idx] = minHeap.top();
            minHeap.pop();
            
            // Update smallest range if found smaller
            if (current_max - val < range_end - range_start) {
                range_start = val;
                range_end = current_max;
            }
            
            // Move to next element in the same list
            if (elem_idx + 1 == nums[list_idx].size()) break;
            
            int next_val = nums[list_idx][elem_idx + 1];
            minHeap.push({next_val, list_idx, elem_idx + 1});
            current_max = max(current_max, next_val);
        }
        
        return {range_start, range_end};
    }
};
