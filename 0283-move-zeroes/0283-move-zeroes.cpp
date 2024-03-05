class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n=nums.size();
        int count0=0;
        
        for(int k=0;k<n;k++){
            if(nums[k]==0){
                count0++;
            }
        }
        
        
        int j=0;
        for(int i=0;i<n;i++)
        {
            if(nums[i]!=0){
                nums[j]=nums[i];
                j++;
            }
        }
        
        for(int k=n-1;k>=n-count0;k--){
            nums[k]=0;
        }
    }
};