

class Solution {
public:
    int compress(vector<char>& chars) {

        int n = chars.size();
        int indx = 0;

        for (int i = 0; i < n; i++) {
            char ch = chars[i];   // ✅ char होना चाहिए
            int count = 0;

            // count same characters
            while (i < n && chars[i] == ch) {
                count++;
                i++;
            }

            // write character
            chars[indx++] = ch;

            // write count if >1
            if (count > 1) {
                string str = to_string(count);

                for (char dig : str) {
                    chars[indx++] = dig;  // ✅ indx++ जरूरी है
                }
            }

            i--; // adjust index
        }

        //chars.resize(indx);
        return indx;
    }
};