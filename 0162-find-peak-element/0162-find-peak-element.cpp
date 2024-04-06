class Solution {
public:
    int findPeakElement(vector<int>& nums) {
       int n=nums.size(); 
        if(n==1)return 0;
        if(n==2)
        {
            if(nums[0]>nums[1]){
                return 0;
            }
            else{
                return 1;
            }
        }
       int low=1,high=n-2;
        int mid;
        while(low<=high){            
            int mid=low+(high-low)/2;            
            
            if(nums[mid]>nums[mid+1] and nums[mid]>nums[mid-1] ){
                return mid;
            }
            
            //Part of increasing curve?
            else if(nums[mid]<nums[mid+1]){
                low=mid+1;
            }
            
            else{
                high=mid-1;
            }
        }
        return (low==n-1)?n-1:0;
    }
};