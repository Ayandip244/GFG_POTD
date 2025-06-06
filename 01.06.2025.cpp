class Solution {
  public:
    int countPairs(vector<vector<int>> &mat1, vector<vector<int>> &mat2, int x) {
        // code here
        int n=mat1.size();
        int cnt=0;
	    for(int i=0;i<n;i++){
	        for(int j=0;j<n;j++){
	            int target=x-mat1[i][j];
	            int left=0,right=n-1;
	            while(left<n && right >=0){
	                if(mat2[left][right]== target){
	                    cnt++;
	                    break;
	                }
	                else if(mat2[left][right]<target){
	                    left++;
	                }
	                else{
	                    right--;
	                }
	            }
	        }
	    }
	    return cnt;
    }
};
