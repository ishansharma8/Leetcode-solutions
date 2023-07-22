class Solution {
public:
    int search(vector<int>& nums, int target) {
      if(nums.size()==1){
        if (target==nums[0]){
        return 0;
          }
        else{
          return -1;
        }
        
      }
      int l=0;
      int h=nums.size()-1;
      sort(nums.begin(),nums.end()-1);
      
      
      for(int i=l;l<=h;i++){
        int mid=l+(h-l)/2;
         cout<<i;
        if(target>nums[mid]){
          l=mid+1;
        }
        else if(target<nums[mid]){
          h=mid-1;
          // cout<<l<<" "<<mid<<" "<<h;

        }
        else {
          return mid;
        }
      }

      return -1;
    }
};