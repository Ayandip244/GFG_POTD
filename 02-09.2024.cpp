class Cell{
    public:
    int i, j, x;
    Cell(int i,int j,int x){
        this->i = i;
        this->j = j;
        this->x = x;
    }
};
class Comparator{
    public:
    int operator()(Cell& c1,Cell& c2){
        return c1.x > c2.x;
    }
};
class Solution
{
    public:
    //Function to return the minimum cost to react at bottom
	//right cell from top left cell.
    int minimumCostPath(vector<vector<int>>& grid) 
    {
        // Code here
        int n = grid.size(), m = grid[0].size();
        priority_queue<Cell, vector<Cell>, Comparator> pq;
        vector<vector<int>> dp(n, vector<int>(m,INT_MAX));
        vector<vector<int>> dir = {{0,-1},{0,1},{-1,0},{1,0}};
        pq.push(Cell(0,0,grid[0][0]));
        dp[0][0] = grid[0][0];
        
        while(!pq.empty()){
            Cell temp = pq.top();
            pq.pop();
            // if(temp.i==n-1 && temp.j==m-1)  return temp.x;
            
            for(auto d:dir){
                int ni = d[0] + temp.i;
                int nj = d[1] + temp.j;
                if(ni<0 || nj<0 || ni>=n || nj>=m)  continue;
                
                int nx = grid[ni][nj] + temp.x;
                if(dp[ni][nj]<=nx) continue;
                if(ni==n-1 && nj==m-1)  return nx;
                
                dp[ni][nj]=nx;
                pq.push(Cell(ni,nj,nx));
            }
        }
        
        
        return 0;
    }
};
