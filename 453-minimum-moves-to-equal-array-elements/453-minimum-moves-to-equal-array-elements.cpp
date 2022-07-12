class Solution {
public:
    int minMoves(vector<int>& nums) {
        
        int count=0;
        int min=*min_element(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++){
            if(nums[i]!=min){
                int diff=nums[i]-min;
                count+=diff;
            }
        }
        return count;
    }
};