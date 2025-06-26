class Solution {
  public:
    int minValue(string &s, int k) {
        // code here
        vector<int> freq(26, 0);
        for (char ch : s) {
            freq[ch - 'a']++;
        }
        while (k--) {
            sort(freq.begin(), freq.end());
            if (freq[25] == 0) {
                break;
            }
            freq[25]--;
        }
        int result = 0;
        for (int val : freq) {
            result += val * val;
        }
        return result;
    }
};
