class Solution {
  public:
    bool anscestor(struct Node *root,int target,vector<int> &ans){
        if(root == NULL){
            return false;
        }
        if(root-> data== target){
            return true;
        }
        if(anscestor(root->left , target, ans) || anscestor(root->right , target, ans)){
            ans.push_back(root->data);
            return true;
        }
        return false;
    }
    // Function should return all the ancestor of the target node
    vector<int> Ancestors(struct Node *root, int target) {
        // Code here
        vector<int> ans;
        anscestor(root,target,ans);
        return ans;
    }
};
