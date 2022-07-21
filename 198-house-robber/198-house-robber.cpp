class Solution {
public:
    int rob(vector<int>& nums) {
        int n=nums.size();
        
        int after1=0;
        int after2=0;
        
        for(int i=n-1;i>=0;i--){
                int curr;
                // ans=max(ans,nums[i]+ans2);
                // ans=max(ans,ans1);
                curr=max(after2+nums[i],after1);
                after2=after1;
                after1=curr;
       }
        return after1;
    }  
};