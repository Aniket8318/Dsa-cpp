class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        if (digits.empty()) {
            return {0};
        }
        int carr = 1;
        int size = digits.size()-1;
        for (int i=size;i>=0;i--) {
            int sum=digits[i]+carr;
            digits[i]=sum%10;
            carr=sum/10;
        }
        if (carr) {
            digits.insert(digits.begin(), carr);
        }
        return digits;
    }
};