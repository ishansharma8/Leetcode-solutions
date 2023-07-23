class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n=nums.size();
      int maxsum=nums[0];
      int maxtillnow=nums[0];

      
      
      for(int i=1;i<n;i++){
        maxsum=max(nums[i],nums[i]+maxsum);
        maxtillnow=max(maxtillnow,maxsum);
        //cout<<maxtillnow<<" ";
      }
      return maxtillnow;
    }
};