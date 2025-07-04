class Solution {
  public:
    int countAtMostK(vector<int> &arr, int k) {
        // code here
        unordered_map<int,int> m;
    int res = 0, l = 0;
    for(int r = 0; r < arr.size(); r++) {
        if (++m[arr[r]] == 1) k--;
        while (k < 0)
            if (--m[arr[l++]] == 0) k++;
        res += r - l + 1;
    }
    return res;
    }
};
