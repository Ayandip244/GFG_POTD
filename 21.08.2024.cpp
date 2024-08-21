class Solution {
  public:
    vector<int> shortestPath(vector<vector<int>>& edges, int N,int M, int src){
        // code here
        vector<vector<int>> adj(N);
        for (const auto& edge : edges) {
            adj[edge[0]].push_back(edge[1]);
            adj[edge[1]].push_back(edge[0]);
        }
    
        // Distance array
        vector<int> dis(N, INT_MAX);
        dis[src] = 0;
    
        // BFS
        queue<int> q;
        q.push(src);
        while (!q.empty()) {
            int cur = q.front();
            q.pop();
    
            for (int nbr : adj[cur]) {
                if (dis[cur] + 1 < dis[nbr]) {
                    dis[nbr] = dis[cur] + 1;
                    q.push(nbr);
                }
            }
        }
    
        // Replace unreachable nodes' distance with -1
        for (int i = 0; i < N; ++i) {
            if (dis[i] == INT_MAX) {
                dis[i] = -1;
            }
        }
    
        return dis;
    }
};
