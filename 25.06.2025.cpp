class Solution {
  public:
    bool sameFreq(string& s) {
        // code here
        vector<int> f(26);
        for (char c : s) f[c - 'a']++;
        int maxF = 0, minF = INT_MAX, maxC = 0, minC = 0;
        for (int x : f) {
            if (!x) continue;
            if (x == maxF) maxC++;
            if (x == minF) minC++;
            if (x > maxF) maxF = x, maxC = 1;
            if (x < minF) minF = x, minC = 1;
        }
        return maxF == minF || (maxF - minF == 1 && (maxC == 1 || (minF == 1 && minC == 1)));
    }
};
