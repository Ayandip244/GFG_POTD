class Solution {
  public:
    int longestKSubstr(string &s, int k) {
        // code here
        int n = s.length();
        vector<int> freq(26, 0);
        int count = 0, l = 0;
        int res = -1;

        for (int r = 0; r < n; r++) {
            int ch1 = s[r] - 'a';
            if (freq[ch1] == 0) count++;
            freq[ch1]++;

            while (count > k) {
                int ch2 = s[l] - 'a';
                freq[ch2]--;
                if (freq[ch2] == 0) count--;
                l++;
            }
            if (count == k)
                res = max(res, r - l + 1);
        }
        return res;
    }
};
