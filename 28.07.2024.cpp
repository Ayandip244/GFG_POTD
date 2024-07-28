class Solution {
  public:

    string removeDups(string str) {
        // Your code goes here
        int arr[26]={0};
        int j=0;

        for(int i=0;i<str.size();i++){
            if(arr[str[i]-'a']==0){
                str[j++]=str[i];
            }
            arr[str[i]-'a']=1;
        }
        return str.substr(0,j);
    }
};
