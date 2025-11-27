class Solution {
public:
    int digitSquareSum(int n) {
        int sum = 0;
        while(n > 0){
            int digit = n % 10;
            sum += digit * digit;
            n /= 10;
        }
        return sum;
    }

    bool isHappy(int n) {
        int slow = n;
        int fast = digitSquareSum(n);

        while(fast != 1 && slow != fast){
            slow = digitSquareSum(slow);
            fast = digitSquareSum(digitSquareSum(fast));
        }

        return fast == 1;
    }
};
