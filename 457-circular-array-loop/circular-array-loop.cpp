class Solution {
public:
    int nextIndex(vector<int>& nums, int i) {
        int n = nums.size();
        return ((i + nums[i]) % n + n) % n;
    }

    bool circularArrayLoop(vector<int>& nums) {
        int n = nums.size();

        for (int i = 0; i < n; i++) {
            int slow = i, fast = i;

            bool isForward = nums[i] > 0; // direction

            while (true) {
                slow = nextIndex(nums, slow);
                if ((nums[slow] > 0) != isForward) break;

                fast = nextIndex(nums, fast);
                if ((nums[fast] > 0) != isForward) break;

                fast = nextIndex(nums, fast);
                if ((nums[fast] > 0) != isForward) break;

                if (slow == fast) {
                    if (slow == nextIndex(nums, slow)) break;
                    return true;
                }
            }
        }

        return false;
    }
};
