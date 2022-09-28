class Solution {
public:
  vector<vector<int>> permute(vector<int>& nums) {
      vector<vector<int>>output;
      recurpermute(0,nums,output);
    return output;
    }
  
void recurpermute(int index,vector<int>& nums,vector<vector<int>>&output)   {
     if(index==nums.size()){
       output.push_back(nums);
       return;
     }
  
  for(int i=index;i<nums.size();i++){
    swap(nums[i],nums[index]);
    recurpermute(index+1,nums,output);
    swap(nums[i],nums[index]);
  }
  }
};