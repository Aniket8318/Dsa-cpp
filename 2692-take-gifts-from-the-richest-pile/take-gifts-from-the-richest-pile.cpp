#include <iostream>
#include <queue>
#include <cmath>
#include <vector>

using namespace std;

class Solution {
public:
    long long pickGifts(vector<int>& gifts, int k) {

        priority_queue<int> p;

        for (int i : gifts)
            p.push(i);

        while (k-- > 0)
        {
            int largest = p.top();
            p.pop();
            int reducedGift = static_cast<int>(floor(sqrt(largest)));  // Casting to int

            p.push(reducedGift);
        }

        long long totalGift = 0;  // Make totalGift a long long to handle larger values
        while (!p.empty())
        {
            totalGift += p.top();
            p.pop();
        }

        return totalGift;
    }
};
