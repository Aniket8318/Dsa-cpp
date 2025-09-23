class Solution {
public:
    int  reverseBits(int  n) {
        int rev = 0;  // this will store the answer

        for (int i = 0; i < 32; i++) {
            int bit = n & 1;          // take last bit of n
            rev = (rev << 1) | bit;   // shift rev left and add the bit
            n >>= 1;                  // shift n right to check next bit
        }

        return rev;
    }
};
