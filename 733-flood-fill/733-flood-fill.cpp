 class Solution {
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        
       // bool visited[n][m]=false;
        int n=image.size();
        int m=image[0].size();
        queue<pair<int,int>>q;
        vector<vector<bool>>visited(n,vector<bool>(m,0));
        
        q.push({sr,sc});
        
        while(!q.empty()){
            pair<int,int>p=q.front();
            q.pop();
            int x=p.first;
            int y=p.second;
            int left[4]={1,0,-1,0};
            int right[4]={0,1,0,-1};
            
            
            
            
            if(visited[x][y]!=1){
                for(int i=0;i<4;i++){
                int row=left[i]+p.first;
                int col=right[i]+p.second;
                if(row>=0 && col>=0 && row<n && col<m && image[row][col]==image[x][y]){
                q.push({row,col});
            }
        }
                visited[x][y]=1;
                image[x][y]=color;
            }
        }
    
         return image;
        
    }
};