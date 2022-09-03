class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
      vector<int>ans;
      unordered_map<int,int>ump;
      for(auto elem:nums){
        ump[elem]++;
      }
      
      priority_queue<pair<int,int>>pq;
      for(auto x:ump){
        pq.push({x.second,x.first});
      }
      
      while(k--){
        int large=pq.top().second;
        pq.pop();
        ans.push_back(large);
      }
      return ans;
        
    }
};