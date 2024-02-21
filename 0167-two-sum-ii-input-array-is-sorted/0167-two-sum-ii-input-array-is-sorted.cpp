class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n=nums.size();
        int l=0;
        int h=n-1;
        
        while(l<h){
            if(nums[l]+nums[h]==target){
                return {l+1,h+1};
            }
            else if(nums[l]+nums[h]>target){
                h--;
            }
            else {
                l++;
            }
        }
        return{0,0};
    }
};