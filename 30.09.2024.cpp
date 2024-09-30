class Solution {
  public:
    // Function to return a list of integers denoting the node
    // values of both the BST in a sorted order.
    vector<int> merge(Node *root1, Node *root2) {
        // Your code here
        stack<Node*> s1, s2;
        vector<int> ans;
        
        while (root1 or root2 or !s1.empty() or !s2.empty())  {
            while(root1)  {
                s1.push(root1);
                root1 = root1->left;
            }
            while(root2)  {
                s2.push(root2);
                root2 = root2->left;
            }
            
            if (s2.empty() or (!s1.empty() and s1.top()->data <= s2.top()->data))  {
                root1 = s1.top();
                s1.pop();
                ans.push_back(root1->data);
                
                root1 = root1->right;
            }
            else  {
                root2 = s2.top();
                s2.pop();
                ans.push_back(root2->data);
                
                root2 = root2->right;
            }
        }
        return ans;
    }
};
