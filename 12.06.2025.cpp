class Solution {
  public:
    vector<int> printKClosest(vector<int> arr, int k, int x) {
        // Code here
        auto comp = [x](int a, int b) {
            int diffA = abs(a - x);
            int diffB = abs(b - x);
            if (diffA != diffB)
                return diffA < diffB;
            return a > b;
        };

        priority_queue<int, vector<int>, decltype(comp)> pq(comp);

        for (int i : arr) {
            if (i != x) {
                pq.push(i);
            }
            if (pq.size() > k) {
                pq.pop();
            }
        }

        vector<int> ans(k);
        for (int i = k - 1; i >= 0; --i) {
            ans[i] = pq.top();
            pq.pop();
        }

        return ans;
    }
};
