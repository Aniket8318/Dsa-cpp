#include <bits/stdc++.h>
using namespace std;

class RandomizedSet {
    vector<int> nums;                     // store elements
    unordered_map<int,int> mp;            // value -> index in nums
public:
    RandomizedSet() {
        
    }
    
    bool insert(int val) {
        if (mp.find(val) != mp.end())      // already exists
            return false;
        nums.push_back(val);
        mp[val] = nums.size() - 1;         // store index
        return true;
    }
    
    bool remove(int val) {
        if (mp.find(val) == mp.end())      // not exists
            return false;
        
        int idx = mp[val];                 // index of element to remove
        int last = nums.back();            // last element in vector
        
        // swap current with last
        nums[idx] = last;
        mp[last] = idx;
        
        // pop last
        nums.pop_back();
        mp.erase(val);
        
        return true;
    }
    
    int getRandom() {
        int randomIndex = rand() % nums.size();
        return nums[randomIndex];
    }
};
