class Solution {
  public:
    int kokoEat(vector<int>& arr, int k) {
        // Code here
        int l=1, h=0, ans=0;
        for (int i : arr) h=max(h,i);
        while (l<=h){
            int b=(l+h)/2;
            int t=0;
            for(int i : arr) t+= (i + b - 1) / b;
            if(t>k) l=b+1;
            else{ans = b; h = b-1;}
        }
        return ans;
    }
};
