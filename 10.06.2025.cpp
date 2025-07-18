class Solution {
  public:
    int countStrings(string &s) {
        // code here
        unordered_map<char, int> freq;
        for (char ch : s) freq[ch]++;
        int ans = 0;
        int len = s.length();
        bool flag = false;
        for (char ch : s) {
            if (freq[ch] > 1) flag = true;
            ans += len - freq[ch];
        }
        ans /= 2;
        if (flag) ans += 1;
        return ans;
    }
};
