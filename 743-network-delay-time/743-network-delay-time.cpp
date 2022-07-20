class Solution {
public:
    int networkDelayTime(vector<vector<int>>& times, int n, int k) {
        vector<int>dis(n+1,INT_MAX);
        
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pq;
        
        vector<pair<int,int>>adj[n+1];
       // vector<bool> visited (n+1,false);
        
        for(int i=0;i<times.size();i++){
            int u=times[i][0];
            int v=times[i][1];
            int w=times[i][2];
            adj[u].push_back({v,w});
        }
        dis[0]=0;
        dis[k]=0;
        pq.push({0,k});
        
        while(!pq.empty()){
            int currNode=pq.top().second;
            pq.pop();
           // if(visited[currNode]) continue;
            
            
            for(auto x:adj[currNode]){
                
                int nextNode=x.first;   
                int weight=x.second; // ,dis[3]+ 4 < d[2] 
            
                if(dis[currNode] + weight < dis[nextNode]){
                    pq.push({ dis[currNode] + weight , nextNode });
                    dis[nextNode] = dis[currNode] + weight;
                }   
            }
           // visited[currNode]=true;
        }
        int ans=0;
        for(int i=0;i<=n;i++){
            if(dis[i]==INT_MAX){
                return -1;
            }
            ans=max(ans,dis[i]);
        }
        return ans;
    }
    
};
    //-1 if we are not able to reach node.node ka distance agr int_max rha toh -1


