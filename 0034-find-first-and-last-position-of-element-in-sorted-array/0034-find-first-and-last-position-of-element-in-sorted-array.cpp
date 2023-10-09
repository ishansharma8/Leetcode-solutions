class Solution {
public:  
        
        int first(vector<int>& nums,int target){//use start and end
        //int n=nums.size();
        int res=-1;
        int low=0;
        int mid;
        int high=nums.size()-1;
            
        while(low<=high){
        int mid=low+(high-low)/2;    
        if(nums[mid]==target){
            res=mid;
            high=mid-1 ;
        }
        else if(target<nums[mid])
            high=mid-1;
        else
            low=mid+1;
    }
        return res;
 }
    
    
        int last(vector<int>& nums,int target){
        vector<int>v;
        //int n=nums.size();
        int res=-1;
        int low=0;
        int mid;
        int high=nums.size()-1;
        while(low<=high){
             mid=low+(high-low)/2;
            if(nums[mid]==target){
                res=mid;
                low=mid+1 ;
                }
            
            else if(target<nums[mid])
            high=mid-1;
            else
            low=mid+1;  
    }
        return res;
}
       

        vector<int> searchRange(vector<int>& nums, int target) {
        int n=nums.size();
        vector<int>v;
        // int firstoccur=first(nums,target);
        // int lastoccur=last(nums,target);
        // v.push_back(firstoccur);
        // v.push_back(lastoccur); 
             v.push_back(first(nums,target));
            v.push_back(last(nums,target));
        
        return v;
    }
};