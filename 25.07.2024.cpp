class Solution {
  public:
    Node* codeGenius(vector<int>& nums,int left,int right){
        if(left>right){
            return NULL;
        }
        int mid= left + (right-left)/2;
        Node* node =new Node(nums[mid]);
        node->left=codeGenius(nums,left,mid-1);
        node->right=codeGenius(nums,mid+1,right);
    }
    Node* sortedArrayToBST(vector<int>& nums) {
        // Code here
        Node* root=codeGenius(nums,0,nums.size()-1);
        return root;
    }
};
