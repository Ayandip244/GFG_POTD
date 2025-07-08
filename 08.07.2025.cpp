class Solution {
  public:
    vector<int> findGreater(vector<int>& arr) {
        // code here
        int n = arr.size();
        if (n == 0) return {};
        const int MAX_SIZE = 100001;
        vector<int> freqArr(MAX_SIZE, 0);
        for (int num : arr) {
            freqArr[num]++;
        }
        vector<int> res(n, -1);
        stack<int> st;
        for (int i = n - 1; i >= 0; --i) {
            while (!st.empty()) {
                int topIndex = st.top();
                if (freqArr[arr[topIndex]] <= freqArr[arr[i]]) {
                    st.pop();
                } else {
                    break;
                }
            }
            if (!st.empty()) {
                res[i] = arr[st.top()];
            }

            st.push(i);
        }
        return res;
    }
};
