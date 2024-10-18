class Solution {
  public:
    int getSingle(vector<int>& arr) {
        // code here
        int number=0;
        for(int i=0;i<arr.size();i++){
            number=number^arr[i];
        }
        return number;
    }
};
