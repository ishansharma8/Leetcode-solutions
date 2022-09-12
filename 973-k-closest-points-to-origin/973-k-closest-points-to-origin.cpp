class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
      vector<int>ans;
      vector<vector<int>>result;
      int elem1,elem2,dist;
      
      priority_queue<pair<int,vector<int>>>pq;
      for(auto x:points){
        elem1=x[0];
        elem2=x[1];
        dist=pow(elem1,2)+pow(elem2,2);
        pq.push({-dist,x});
      }
      
      while(k--){
        result.push_back(pq.top().second);
        pq.pop();
      }
      
      return result;
        
    }
};