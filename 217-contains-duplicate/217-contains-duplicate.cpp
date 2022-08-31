class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
      unordered_map<int,int>mp;
      for(int i=0;i<nums.size();i++){
        mp[nums[i]]++;
      }
      
      for(auto elem:mp){
        if(elem.second>1)
          return true;
      }
        return false;
    }
};