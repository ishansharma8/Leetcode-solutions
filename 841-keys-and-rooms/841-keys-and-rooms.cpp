class Solution {
public:
    bool vis[1005]={0};
    
    void dfs(int u,vector<vector<int>>rooms){
        vis[u]=1;
        for(int x:rooms[u]){
            if(vis[x]==0) {
                dfs(x,rooms);
            }
        }
    }
    
    
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        dfs(0,rooms);
        int n=rooms.size();
        bool ans=1;
        for(int i=0;i<n;i++){
            if(vis[i]==0){
                ans=0;
              //  break;
            }
        }
        return ans;
        
    }
};