class Solution {
  public:
    int totalElements(vector<int> &arr) {
        // code here
        int l = 0, ans = 0;
        unordered_map<int, int> freq;
        for (int r = 0; r < arr.size(); ++r) {
            freq[arr[r]]++;
            while (freq.size() > 2) {
                if (--freq[arr[l]] == 0)
                    freq.erase(arr[l]);
                ++l;
            }
            ans = max(ans, r - l + 1);
        }
        return ans;
    }
};
