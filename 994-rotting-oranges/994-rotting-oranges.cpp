class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
      int n=grid.size();
      int m=grid[0].size();
      int time=0;
      int fresh=0;
      
      // vector<vector<<bool>>vis(n,vector<bool>(m,0));
      queue<pair<int,int>>q;
      
      for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
          if(grid[i][j]==2){
            q.push({i,j});
          }
          if(grid[i][j]==1){
            fresh++;
          }
        }
      }
 // cout<<q.size();
      
    int dirx[4]={1,0,-1,0};
    int diry[4]={0,1,0,-1};
      
    while(!q.empty()){
      int size=q.size();
      while(size--)
      {
          pair<int,int>curr=q.front();
          q.pop();
          int x=curr.first;
          int y=curr.second;

          for(int i=0;i<4;i++){
            int row=x+dirx[i];
            int col=y+diry[i];
            if(row>=0 and col>=0 and row<n and col<m and grid[row][col]==1){
            grid[row][col]=2;
            q.push({row,col});
            fresh--;
            }
          }
      }
      time++;
    }
      
       if(fresh>0)    
        return -1;
      
      if(time==0)   //we initialised with 0, so if there were no oranges i.e., [[0]]  it'd take 0 mins.
        return 0;     
      
      return time-1;
    }
  
};