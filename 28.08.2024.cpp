class Solution {
  public:
    static bool condition(pair<int,int>&p1,pair<int,int>&p2){
        return (p1.second==p2.second)?p1.first<p2.first :p1.second>p2.second;
    }
    // Complete this function
    // Function to sort the array according to frequency of elements.
    vector<int> sortByFreq(vector<int>& arr) {
        // Your code here
        map<int,int>mp;
        for(int i=0;i<arr.size();i++) mp[arr[i]]++;

        vector<pair<int,int>>p(mp.begin(),mp.end());

        sort(p.begin(),p.end(),condition);

        vector<int> ans;

        for(pair<int,int>&temp :p){
           while(temp.second--) ans.push_back(temp.first);
        }
        return ans;
    }
};
