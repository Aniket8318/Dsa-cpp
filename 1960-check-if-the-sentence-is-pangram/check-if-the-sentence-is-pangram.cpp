class Solution {
public:
    bool checkIfPangram(string sentence) {
        vector<bool> alpha(26, 0);

        for (int i = 0; i < sentence.size(); i++) {
            int index = sentence[i] - 'a';
            alpha[index] = 1;
        }

        for (int i = 0; i < 26; i++) {
            if (alpha[i] == 0) {
                return false;  // Agar koi letter missing hai
            }
        }

        return true; // Sab letters present hain
    }
};
