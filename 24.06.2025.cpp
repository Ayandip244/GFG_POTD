class Solution {
  public:
    string maxSubseq(string& s, int k) {
        // code here
        int n = s.length();
        int toRemove = k;
        string result   = "";
        for (int i = 0; i < n; i++) {
            while (!result.empty() && toRemove > 0 && s[i] > result.back()) {
                result.pop_back();
                toRemove--;
            }
            result.push_back(s[i]);
        }
        result.resize(n - k);
        return result;
    }
};
