class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
      int j=-1;
      int countofval=0;
        for(int i=0;i<nums.size();i++){
          if(nums[i]!=val){
            j++;
            swap(nums[i],nums[j]);
          }
          else{
            countofval++;
          }
        }
      return nums.size()-countofval;
    }
};