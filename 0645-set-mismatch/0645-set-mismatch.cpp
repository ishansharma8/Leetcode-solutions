class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
      int n=nums.size();
      vector<int>v(n+1,1);
      v[0]=100;
      vector<int>ans(2);
      
      for(int i=0;i<n;i++){
        v[nums[i]]--;
        if(v[nums[i]]==-1){
          ans[0]=nums[i];
        }
      }
      for(int i=0;i<n+1;i++){
        if(v[i]==1){
          
          ans[1]=i;
          break;
        }
      }
      return ans;
    }
};