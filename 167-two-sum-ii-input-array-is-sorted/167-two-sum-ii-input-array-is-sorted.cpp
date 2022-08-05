class Solution {
public:
        vector<int> twoSum(vector<int>& nums, int target) {
            int start=0;
            int n=nums.size();
            int last=n-1;
            
            for(int i=0;i<n-1;i++){
                if(nums[start]+nums[last]==target){
                    return {start+1,last+1};
                }
                else if(nums[start]+nums[last]>target){
                    last--;
                }
                else{
                    start++;
                }
            } 
            return {};
        }
};