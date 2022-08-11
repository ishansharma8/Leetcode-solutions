class Solution {
public:
    int triangleNumber(vector<int>& nums) {
        int ans=0;
        int n=nums.size();
        sort(nums.begin(),nums.end());
        for(int k=n-1;k>0;k--){
            int i=0;
            int j=k-1;
            while(i<j){
                if(nums[i]+nums[j]<=nums[k]){
                    i++;
                }
                else{
                    int diff=j-i;
                    ans+=diff;
                    j--;
                }
            }
        }
             
        return ans;

    }
};