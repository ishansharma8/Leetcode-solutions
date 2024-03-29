class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int n=nums.size();
        
        int low=0;
        int high=n-1;
        int mid;
        int ans;
        
        while(low<=high){
            mid=low+(high-low)/2;
            
            if(target>nums[mid]){
                low=mid+1;
            }
            else{
                ans=mid;
                high=mid-1;
            }
        }
        return ans;
    }
};