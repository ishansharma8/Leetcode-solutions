class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int n=nums.size();
        int l=0;
        int r=n-1;
        int mid;
        if(n==1)return 0;
        if(nums[0]>nums[1])return 0;
        if(nums[n-1]>nums[n-2])return n-1;
        
        while(l<=r){
            mid=l+(r-l)/2;
            if(nums[mid]<nums[mid+1]){
                l=mid+1;
            }
            else if(nums[mid]<nums[mid-1]){
                r=mid-1;
            }
            else{
                return mid;
            }
        }
        return 0;
    }
};