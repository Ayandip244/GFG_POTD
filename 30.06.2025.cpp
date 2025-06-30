class Solution {
  public:
    bool canReachHeight(vector<int>& arr, int k, int w, int target) {
        int n = arr.size();
        vector<long long> add(n + 1, 0);
        long long ops = 0, currAdd = 0;

        for (int i = 0; i < n; ++i) {
            currAdd += add[i];

            long long currentHeight = arr[i] + currAdd;
            if (currentHeight < target) {
                long long need = target - currentHeight;
                ops += need;
                if (ops > k) return false;

                currAdd += need;
                if (i + w < n) add[i + w] -= need;
            }
        }
        return true;
    }
    int maxMinHeight(vector<int> &arr, int k, int w) {
        // code here
        int low = *min_element(arr.begin(), arr.end());
        int high = low + k;
        int ans = low;

        while (low <= high) {
            int mid = (low + high) / 2;

            if (canReachHeight(arr, k, w, mid)) {
                ans = mid;
                low = mid + 1;  // Try higher
            } else {
                high = mid - 1; // Try lower
            }
        }
        return ans;
    }
};
