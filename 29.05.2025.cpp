class Solution {
    int path=0;
    int sum=0;
    void solve(Node* root,int currLen, int currSum){
        if(root== nullptr){
            if(currLen>path){
                path=currLen;
                sum=currSum;
            }
            else if(currLen== path){
                sum=max(sum,currSum);
            }
            return;
        }
        solve(root->left,currLen+1,currSum+root->data);
        solve(root->right,currLen+1,currSum+root->data);
    }
  public:
    int sumOfLongRootToLeafPath(Node *root) {
        // code here
        solve(root,0,0);
        return sum;
    }
};
