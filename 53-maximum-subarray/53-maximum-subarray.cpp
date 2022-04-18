class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        
        int maxsum=nums[0];
        int prsum=nums[0];
        for(int i=0;i<nums.size();i++){
            if(nums[i]>0){
                break;
            }
            if(i==nums.size()-1){
                return *max_element(nums.begin(), nums.end());
            }
        }
        
        for(int i=1;i<nums.size();i++){
        
            maxsum=maxsum+nums[i];
            if(maxsum<nums[i]){
                maxsum=nums[i];
                if(maxsum>prsum)
                prsum=maxsum;
            }
            if (maxsum>prsum)
            {
                prsum=maxsum;
            }               
        }
        return prsum;
    }
};










// if(maxsum>0){
            //     continue;
            // }
            // else
            // {
            //     if(nums[i]>0 & prsum<nums[i])
            //         maxsum=nums[i];
            //     if(prsum<maxsum)
            //     {
            //         prsum=maxsum;
            //     }
            // }