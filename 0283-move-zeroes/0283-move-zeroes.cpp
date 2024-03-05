class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n=nums.size();
        int count0=0;
        
        for(int i=0;i<n;i++){
            if(nums[i]==0){
                count0++;
            }
        }
        
        
        vector<int>ans(n-count0,-1);
        int j=0;
        for(int i=0;i<n;i++){
            if(nums[i]!=0){
                ans[j]=nums[i];
                j++;
            }
        }
        for(int t=n-1;t>0;t--){
            nums[t]=0;
        }
        
        for(int i=0;i<n-count0;i++){
            nums[i]=ans[i];
        }
        
    }
};