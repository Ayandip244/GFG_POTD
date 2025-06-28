class Solution {
  public:
    vector<int> countLessEq(vector<int>& a, vector<int>& b) {
        // code here
        int n = a.size();
        int m = b.size();
        vector<int> result(n);
        sort(b.begin(), b.end());
        for (int i = 0; i < n; i++) {
            result[i] = upper_bound(b.begin(), b.end(), a[i]) - b.begin();
        }
        return result;
    }
};
