class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int firstelem=first(nums,target);
        int secondelem=second(nums,target);
        vector<int>result;
        result.push_back(firstelem);
        result.push_back(secondelem);
        return result;
    }
    
    int first(vector<int>& nums, int target){
    int n=nums.size();       
    int low=0,high=n-1;
    int ans=-1;
        
        while(low<=high){
            int mid=low+(high-low)/2;
            
            if(target>nums[mid]){                
                low=mid+1;
            }
            else{
                if(target==nums[mid]){
                    ans=mid;
                }
                high=mid-1;
            }
        }
        return ans;
}
    
    int second(vector<int>& nums, int target){
    int n=nums.size();
    int low=0,high=n-1;
    int ans=-1;
        
        while(low<=high){
            int mid=low+(high-low)/2;
            
            if(target>=nums[mid]){ 
                if(target==nums[mid]){
                    ans=mid;
                }
                low=mid+1;
            }
            else{
                high=mid-1;
            }
        }
        return ans;
}
};