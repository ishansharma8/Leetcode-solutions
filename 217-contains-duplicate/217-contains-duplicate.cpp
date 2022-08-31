class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
      unordered_set<int>s;
      for(auto& elem:nums){
        if(s.find(elem)!=s.end())
          return true;
        s.insert(elem);
      }
        return false;
    }
};