class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        int n=nums.size();
        vector<int>v(n);
        v[0]=nums[0];
        int sum=nums[0];
        
        for(int i=1;i<n;i++){
            
            v[i]=sum+nums[i];
            sum=v[i];
            
        }
        return v;
        
    }
};