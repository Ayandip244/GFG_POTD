class Solution {
  public:
    int maxSum(vector<int> &arr) {
        // code here
        int m=0;
        for(int i=1;i<arr.size();i++)m=max(m,arr[i]+arr[i-1]);
        return m;
    }
};
