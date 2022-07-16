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
            visited[x][y]=1;
         
            int left[4]={1,0,-1,0};
            int right[4]={0,1,0,-1};
            for(int i=0;i<4;i++){
            int row=left[i]+x;
            int col=right[i]+y;
            
    if(row>=0 && col>=0 && row<n && col<m && visited[row][col]==0 && image[row][col]==image[x][y]){
                q.push({row,col});
                visited[row][col]=1;
            }
                cout<<q.size()<<" ";
            }
                
                image[x][y]=color;
        }
    
         return image;
        
    }
};