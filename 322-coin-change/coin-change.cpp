class Solution {
public:
    int coinChange(vector<int>& coins, int amount) {
        // dp[i] = minimum number of coins to make amount i
        vector<int> dp(amount + 1, amount + 1);
        dp[0] = 0; // base case: 0 coins needed to make amount 0

        sort(coins.begin(), coins.end());

        // Fill dp array
        for (int i = 1; i <= amount; i++) {
            for (int coin : coins) {
                if (coin <= i) {
                    dp[i] = min(dp[i], dp[i - coin] + 1);
                } else {
                    break; // optimization, since coins are sorted
                }
            }
        }

        return (dp[amount] > amount) ? -1 : dp[amount];
    }
};
