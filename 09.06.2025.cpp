class Solution {
  public:
    bool isDeadEnd(Node *root) {
        // Code here
        return check(root, 0, INT_MAX);
    }

private:
    bool check(Node* root, int min, int max) {
        if (root == nullptr) return false;
        if (min + 1 == root->data && max - 1 == root->data) return true;
        return check(root->left, min, root->data) || check(root->right, root->data, max);
    }
};
