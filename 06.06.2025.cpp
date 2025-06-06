class Solution {
  public:
    vector<int> search(string &pat, string &txt) {
        // code here.
        int n = txt.size(), m = pat.size();
        const int base = 256, mod = 1e9+7;
        vector<int> res;
        long long ph = 0, th = 0, h = 1;

        for (int i = 0; i < m - 1; i++) h = h * base % mod;
        for (int i = 0; i < m; i++) {
            ph = (ph * base + pat[i]) % mod;
            th = (th * base + txt[i]) % mod;
        }

        for (int i = 0; i <= n - m; i++) {
            if (ph == th && txt.substr(i, m) == pat) res.push_back(i + 1);
            if (i < n - m) {
                th = (th - txt[i] * h % mod + mod) % mod;
                th = (th * base + txt[i + m]) % mod;
            }
        }
        return res;
    }
};
