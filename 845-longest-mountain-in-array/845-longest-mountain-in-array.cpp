class Solution {
public:
    int longestMountain(vector<int>& nums) {
        int n=nums.size();  
        int ans=0;
        int i=1;
        if(n<3)return 0;
        
        while(i<n){
            
            int up=0;
            while(i<n && nums[i]>nums[i-1]){
                up++;
                i++;
            }
            
            int down=0;
            while(i<n && (nums[i]<nums[i-1])){
                down++;   
                i++;
            }
            
            while(i<n && nums[i]==nums[i-1] ){
                i++;
            }
            
            if(up>0 && down>0 )
                ans=max(ans,up+down+1);
                
            
        }
        return ans;
    }
};