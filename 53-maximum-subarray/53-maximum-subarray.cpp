class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        for(int i=1;i<nums.size();i++){
            nums[i]=max(nums[i] , nums[i-1]+nums[i]);
            cout<<nums[i]<<" ";
        }
        int ans=*max_element(nums.begin(),nums.end());
        return ans;
    }
};