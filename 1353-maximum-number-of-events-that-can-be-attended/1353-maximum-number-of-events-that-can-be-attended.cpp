class Solution {
public:
    int maxEvents(vector<vector<int>>& events) {
      priority_queue<int,vector<int>,greater<int>>pq;
      sort(events.begin(),events.end());
      int ans=0,i =0, n=events.size();
      
      for(int day=1;day<=1e5;day++){
        while(pq.size() && pq.top()<day){
          pq.pop();
        }
        
        while(i<n && events[i][0]==day){
          pq.push(events[i][1]);
          i++;
        }
        
        if(pq.size()){
          ans++;
          pq.pop();
        }
      }
      return ans;
        
    }
};