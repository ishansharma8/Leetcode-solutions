class Solution {
public:
    int islandPerimeter(vector<vector<int>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        queue<pair<int,int>>q;
        vector<vector<bool>>visited(grid.size(),vector<bool>(grid[0].size(),0));
        
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[0].size();j++){
                if(grid[i][j]==1){
                    q.push(make_pair(i,j));
                  //  visited[i][j]=1;
                        break;
                }
            }
        }
        
        int ans=0;
        
        
        while(q.size())
        {
            pair<int,int>p=q.front();
            q.pop();
            int left[4]={1,0,-1,0};
            int right[4]={0,1,0,-1};
            
            if(!visited[p.first][p.second]){
                ans+=4;
                for(int i=0;i<4;i++){
                    int row=left[i]+p.first;
                    int col=right[i]+p.second;
                    
                    if(row>=0 && col>=0 && row<n && col<m && grid[row][col]==1){
                        ans--;
                        q.push(make_pair(row,col));
                    }
                }
                visited[p.first][p.second]=1;
            }

        }
        return ans;
    }
};