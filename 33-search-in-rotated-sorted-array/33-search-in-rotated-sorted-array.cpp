class Solution {
public:
    int search(vector<int>& nums, int target) {
      int low=0;
      int high=nums.size()-1;
      
      while(low<=high){
        int mid=low+(high-low)/2;
        if(nums[mid]==target){
          return mid;
        }
        
        if(nums[low]<=nums[mid]){  //the left side is sorted
          if(nums[low]<=target and target<=nums[mid]){ //basically  a<=target<=b
            high=mid-1;
          } 
          else{
            low=mid+1;
          }
       }
        
        else{                     //right half is sorted
          if(nums[mid]<=target and target<=nums[high]){
            low=mid+1;
          }
          else{
            high=mid-1;
          }
        } 
      }
      
      return -1;
      
    }
};