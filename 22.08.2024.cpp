class Solution{
    public:
    string ans;
    vector<bool> vis,cur;
    unordered_set<int> g[26]; 

    void topological_sort(int r) {
        vis[r]=cur[r]=1;
        for(int i:g[r]) 
            if(!vis[i])
                topological_sort(i);

        ans=char(97+r)+ans;
        cur[r]=0;
    }

    string findOrder(string arr[], int N, int K) {
        ans="";
        vis.assign(26,0); 
        cur=vis;

         for(int i=1;i<N;i++) {
          string a=arr[i-1],b=arr[i];
          int l=0,n=min(a.size(),b.size());
          while(l<n && a[l]==b[l]) 
                l++;
          if(l!=n) g[a[l]-'a'].insert(b[l]-'a');
         }

       for(int i=0;i<K;i++)
            if(!vis[i])
                topological_sort(i);
        return ans;
    }
};