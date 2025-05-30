class Solution {
  public:
    int findMaxFork(Node* root, int k) {
        // code here
        int ans=INT_MIN;
        while(root){
            if(root->data <=k){
                ans=max(ans,root->data);
                root=root->right;
            }
            else{
                root =root->left;
            }
        }
        return ans==INT_MIN?-1:ans;
    }
};
