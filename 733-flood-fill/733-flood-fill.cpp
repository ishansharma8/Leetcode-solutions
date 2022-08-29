class Solution {
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
      int n=image.size();
      int m=image[0].size();
      queue<pair<int,int>>q;
      vector<vector<bool>>vis(n,vector<bool>(m,0));
      q.push({sr,sc});
      
      while(!q.empty()){
        pair<int,int>p=q.front();  //similar to int x =q.front();
        // cout<<p.first<<" "<<p.second<<endl;
        
        q.pop();
        int x=p.first;  //dont write p.first();
        int y=p.second;  
        vis[x][y]=1;
        
        int horizontal[4]={1,0,-1,0};
        int vertical[4]  ={0,1,0,-1};
        for(int i=0;i<4;i++){
          
          int row=x+horizontal[i];
          int col=y+vertical[i];
          
          if(row>=0 && col>=0 && row<n && col<m && vis[row][col]==0 && image[row][col]==image[x][y]){
            q.push({row,col});
            vis[row][col]=1;
          }
        }
        image[x][y]=color;
      }
      
      return image;
    }
};