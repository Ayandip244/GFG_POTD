class Solution {
  public:
    string armstrongNumber(int n){
        // code here
        int sum = 0;
        int d = 0;
        int finNum=n;
        while(n>0){
            d= n%10;
            sum= sum + d*d*d;
            n= n/10;
        }
        return finNum == sum ? "Yes" : "No";
    }
};
