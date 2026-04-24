class Solution {
public:
    bool search(vector<int>& nums, int t) {
        int s = 0, e = nums.size() - 1;

        while (s <= e) {
            int mid = s + (e - s) / 2;

            if (nums[mid] == t)
                return true;

            // 🔥 handle duplicates
            if (nums[s] == nums[mid] && nums[mid] == nums[e]) {
                s++;
                e--;
            }
            // left sorted
            else if (nums[s] <= nums[mid]) {
                if (nums[s] <= t && t < nums[mid]) {
                    e = mid - 1;
                } else {
                    s = mid + 1;
                }
            }
            // right sorted
            else {
                if (nums[mid] < t && t <= nums[e]) {
                    s = mid + 1;
                } else {
                    e = mid - 1;
                }
            }
        }
        return false;
    }
};