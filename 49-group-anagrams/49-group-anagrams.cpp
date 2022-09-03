class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
      unordered_map<string,vector<string>>ump;
      int n=strs.size();
      string currstring;
      
      for(int i=0;i<n;i++){
        currstring=strs[i];
        sort(strs[i].begin(),strs[i].end());
        ump[strs[i]].push_back(currstring);   
        //each of these strs[i] acts a vector
      }
      
      vector<vector<string>>ans;
      for(auto x:ump){  
        ans.push_back(x.second);
      }
      return ans;
      
    }
};