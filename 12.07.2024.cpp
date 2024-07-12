class Solution {
  public:
    bool hasPathSum(Node *root, int target) {
        // Your code here
        if(root==NULL){
            return false;
        }
        if(root-> left ==NULL && root->right == NULL){
            return target==root->data;
        }
        int newtarget=target - root->data;
        return hasPathSum(root->left,newtarget) || hasPathSum(root->right,newtarget);
    }
};
