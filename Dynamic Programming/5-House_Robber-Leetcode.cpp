// Recursive
#include <bits/stdc++.h> 

int f(int i, vector<int>& nums, vector<int>& dp) {
    if (i == 0) return nums[i];
    if (i < 0) return 0;
    if (dp[i] != -1) return dp[i];
    int left = nums[i] + f(i - 2, nums, dp);
    int right = f(i - 1, nums, dp);
    return dp[i] = max(left, right);
}

int maximumNonAdjacentSum(vector<int> &nums){
    int n = nums.size();
    vector<int> dp(n + 1, -1);
    return f(n, nums, dp);
}

// DP- Recursive
class Solution {
public:
    int rob(vector<int>& nums) {
        int n = nums.size();
        vector<int> dp(n + 1, 0);

        dp[0] = nums[0];
        for (int i = 1; i < n; i++) {
            int left;
            if (i - 2 < 0) left = nums[i];
            else left = nums[i] + dp[i - 2];
            int right = dp[i - 1];
            dp[i] = max(left, right);
        }
        return dp[n - 1];
    }
};

// DP- Tabular
class Solution {
public:
    int rob(vector<int>& nums) {
        int n = nums.size();
        vector<int> dp(n + 1, 0);

        dp[0] = nums[0];
        for (int i = 1; i < n; i++) {
            int left;
            if (i - 2 < 0) left = nums[i];
            else left = nums[i] + dp[i - 2];
            int right = dp[i - 1];
            dp[i] = max(left, right);
        }
        return dp[n - 1];
    }
};






// Space Optimization
class Solution {
public:
    int rob(vector<int>& nums) {
        int n = nums.size();
        int last2 = 0, last = nums[0];
        for (int i = 1; i < n; i++) {
            int left = nums[i];
            if (i > 1) left += last2;
            int right = last;
            int curr = max(left, right);
            last2 = last;
            last = curr;
        }
        return last;
    }
};