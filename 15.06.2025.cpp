class Solution {
  public:
    int smallestDivisor(vector<int>& arr, int k) {
        // Code here
        int lo = 1, hi = *max_element(arr.begin(), arr.end()), ans = 0;
        while (lo <= hi) {
            int mid = (lo + hi) / 2;
            if (chec(arr, mid, k)) {
                ans = mid;
                hi = mid - 1;
            } else {
                lo = mid + 1;
            }
        }
        return ans;
    }
    bool chec(vector<int>& arr, int pa, int k) {
        int sum = 0;
        for (int i : arr) {
            sum += (i + pa - 1) / pa;
        }
        return sum <= k;
    }
};
