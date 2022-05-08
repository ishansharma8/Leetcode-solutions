class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        int n=nums.size();
        vector<int>v(n);
        v[0]=1;
        for(int i=1;i<n;i++){
            v[i]=1;
            for(int j=i-1;j>=0;j--){
                if(nums[j]>=nums[i]){
                     continue;
                }
                int possibleans=v[j]+1;
                if(possibleans>v[i]){
                    v[i]=possibleans;
                }
            }
        }
        
        return *max_element(v.begin(),v.end());
    }
};