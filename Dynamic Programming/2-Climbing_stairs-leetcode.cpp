// Recursive
class Solution {
public:
    int climbStairs(int n) {
        if (n == 0 or n == 1) return 1;
        return climbStairs(n - 1) + climbStairs(n - 2);
    }
};

// DP
class Solution {
private:
    int f(int n, vector<int>& dp) {
        if (n == 0 or n == 1) return 1;
        if (dp[n] == -1) dp[n] = f(n - 1, dp) + f(n - 2, dp);
        return dp[n];
    }
public:
    int climbStairs(int n) {
        vector<int> dp(n + 1, -1);
        return f(n, dp);
    }
};

// DP
class Solution {
public:
    int climbStairs(int n) {
        if (n == 0 or n == 1) return 1;

        vector<int> dp(n + 1, -1);
        dp[0] = 1, dp[1] = 1;
        for (int i = 2; i <= n; i++) dp[i] = dp[i - 1] + dp[i - 2];
        return dp[n];
    }
};