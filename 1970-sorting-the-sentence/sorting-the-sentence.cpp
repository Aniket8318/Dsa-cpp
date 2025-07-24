#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string sortSentence(string s) {
        vector<string> words(10); // assuming max 9 words
        string word;
        int i = 0;

        // Split sentence into words
        while (i < s.size()) {
            if (s[i] != ' ') {
                word += s[i];
            } else {
                // Store the word in the correct position
                int pos = word.back() - '0'; // last char is number
                word.pop_back(); // remove the number
                words[pos] = word;
                word.clear();
            }
            i++;
        }

        // For last word (since no space after it)
        int pos = word.back() - '0';
        word.pop_back();
        words[pos] = word;

        // Reconstruct sentence
        string result;
        for (int j = 1; j < words.size(); j++) {
            if (!words[j].empty()) {
                if (!result.empty()) result += " ";
                result += words[j];
            }
        }
        return result;
    }
};
