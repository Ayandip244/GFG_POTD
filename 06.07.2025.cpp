class Solution {
  public:
    int longestCommonSum(vector<int> &a1, vector<int> &a2) {
        // Code here.
        int n = a1.size(), s1 = 0, s2 = 0, ans = 0;
        unordered_map<int, int> m; m[0] = -1;
        for (int i = 0; i < n; ++i) {
            s1 += a1[i], s2 += a2[i];
            int d = s1 - s2;
            if (m.count(d)) ans = max(ans, i - m[d]);
            else m[d] = i;
        }
        return ans;
    }
};
