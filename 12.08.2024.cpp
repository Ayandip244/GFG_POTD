class Solution {
  public:
    int SumofMiddleElements(vector<int> &arr1, vector<int> &arr2) {
        // code here
        vector<int>v;
        int i=0,j=0;
        while(i<arr1.size() || j<arr2.size()){
            int a=INT_MAX,b=INT_MAX;
            if(i<arr1.size()) a=arr1[i];
            if(j<arr2.size()) b=arr2[j];
            if(a<b) v.push_back(a),i++;
            else v.push_back(b),j++;
        }
        int n=v.size();
        if(n%2==0) return v[n/2-1]+v[n/2];
        return v[n/2-1];
    }
};