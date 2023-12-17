/*As the system is cycled, if you take 1st element you can't take last and vice /versa. So, make two separate vector to store values one of without 1st element and another of without last element . Take the max between them.
*/

class Solution {
private:
    int f(int n, vector<int>& v) {
        vector<int> dp(n + 1, 0);
        dp[0] = v[0];
        for (int i = 1; i < n; i++) {
            long long int left;
            if (i - 2 < 0) left = v[i];
            else left = v[i] + dp[i - 2];
            long long int right = dp[i - 1];
            dp[i] = max(left, right);
        }
        return dp[n - 1];
    }
public:
    int rob(vector<int>& nums) {
        int n = nums.size();
        if (n == 1) return nums[0];
        
        vector<int> a, b;
        for (int i = 0; i < n; i++) {
            if (i != 0) a.push_back(nums[i]);
            if (i != n - 1) b.push_back(nums[i]);
        }
        long long int k = max(f(a.size(), a), f(b.size(), b));
        return k;
    }
};
