class Solution {
  public:

    bool kPangram(string str, int k) {
        // code here
        int arr[26]={0}, count =0, op=0;
        for(int i=0;i<str.size();i++){
            if(str[i]!= ' '){
                arr[str[i]-'a']++;
                count++;
            }
        }
        for(int i=0;i<26;i++){
            if(arr[i]==0){
                op++;
            }
        }
        return (op <= k) &&(count>=26);
    }
};
