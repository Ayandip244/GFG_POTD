class Solution {
  public:
    bool isSymmetric(Node* root) {
        // Code here
        if(root == nullptr) return true;
        return isMirror(root->left, root->right);
    }
    bool isMirror(Node* l, Node* r) {
        if(l == nullptr && r == nullptr) return true;
        if(l == nullptr || r == nullptr || l->data != r->data) return false;
        return isMirror(l->left, r->right) && isMirror(l->right, r->left);
    }
};
