class Solution {
  public:
    int find(int n){
            while(n){
                if(n%10 ==4)
                return 1;
             n/=10;
            }
            return 0;
        }
    int countNumberswith4(int n) {
        // code here
        int count =0;
        for(int i=0;i<=n;i++){
            if(find(i))
            count++;
        }
        return count;
    }
};
