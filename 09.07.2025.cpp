class Solution {
  public:
    int sumSubMins(vector<int> &arr) {
        // code here
        int n = arr.size(), MOD = 1e9 + 7;
        vector<int> l(n, -1), r(n, n);
        stack<int> s;
        for (int i = 0; i < n; ++i) {
            while (!s.empty() && arr[s.top()] >= arr[i]) s.pop();
            if (!s.empty()) l[i] = s.top();
            s.push(i);
        }
        s = stack<int>();
        for (int i = n - 1; i >= 0; --i) {
            while (!s.empty() && arr[s.top()] > arr[i]) s.pop();
            if (!s.empty()) r[i] = s.top();
            s.push(i);
        }
        long long sum = 0;
        for (int i = 0; i < n; ++i)
            sum = (sum + (long long)(i - l[i]) * (r[i] - i) % MOD * arr[i]) % MOD;
        return sum;
    }
};
