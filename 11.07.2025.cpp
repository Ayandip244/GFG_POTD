class Solution {
  public:
    int countConsec(int n) {
        // code here
        if(n==2) return 1;
        int prev=0,curr=1,next,ans=1;
        for(int i=3;i<=n;i++){
            next=prev+curr;
            ans=ans*2+ next;
            prev=curr;
            curr=next;
        }
        return ans;
    }
};
