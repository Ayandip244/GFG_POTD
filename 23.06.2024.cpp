class Solution {
  public:

    vector<int> bracketNumbers(string str) {
        // Your code goes here
        vector <int> ans;
        stack<int> st;
        int opens=0;
        for(auto it:str){
            if(it=='('){
                opens++;
                st.push(opens);
                ans.push_back(st.top());
            }
            else if(it==')'){
                ans.push_back(st.top());
                st.pop();
            }
        }
        return ans;
    }
};
