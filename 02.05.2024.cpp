class Solution {
  public:
    vector<int> constructList(int q, vector<vector<int>> &queries) {
        // code here
        vector<int>ans;
        int x=0;

        for(int i=queries.size()-1;i>=0;i--){
            if(queries[i][0]==0){
                ans.push_back(x^queries[i][1]);
            }
            else{
                x^=queries[i][1];
            }
        }
        ans.push_back(0^x);
        sort(ans.begin(), ans.end());
        return ans;
    }
};
