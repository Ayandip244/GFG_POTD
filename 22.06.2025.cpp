class Solution {
  public:
    vector<int> largestSubset(vector<int>& arr) {
        // Code here
        int n = arr.size();
        if (n == 0) return {};

        sort(arr.begin(), arr.end());
        vector<vector<int>> dp(n);
        vector<int> best;

        for (int i = 0; i < n; i++) {
            vector<int> maxSubset;
            for (int j = 0; j < i; j++) {
                if (arr[i] % arr[j] == 0) {
                    if (dp[j].size() > maxSubset.size() ||
                       (dp[j].size() == maxSubset.size() && dp[j] > maxSubset)) {
                        maxSubset = dp[j];
                    }
                }
            }
            dp[i] = maxSubset;
            dp[i].push_back(arr[i]);

            if (dp[i].size() > best.size() ||
               (dp[i].size() == best.size() && dp[i] > best)) {
                best = dp[i];
            }
        }
        return best;
    }
};
