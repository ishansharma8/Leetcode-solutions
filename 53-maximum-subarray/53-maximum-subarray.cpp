class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        return maxarray(nums,0,nums.size()-1);
    }
    
    int maxarray(vector<int>& nums,int l,int r){
        if(l>r){
            return INT_MIN;
        }
        int m=l+(r-l)/2;
        int lmax=maxarray(nums,l,m-1);
        int rmax=maxarray(nums,m+1,r);
        
        int mleft=0,mright=0;
        
        for(int i=m-1,sum=0;i>=l;i--){
            sum+=nums[i];
            mleft=max(mleft,sum);
        }
        
      for(int i=m+1,sum=0;i<=r;i++){
        sum+=nums[i];
        mright=max(mright,sum);
    }
        return max(max(lmax,rmax),mleft+mright+nums[m]);
    }
};