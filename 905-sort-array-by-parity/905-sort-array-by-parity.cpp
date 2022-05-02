class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        int n=nums.size();
        vector<int>v(n);
        int s=0;
        int e=n-1;
        for(int i=0;i<n;i++){
            if(nums[i] & 1){
                v[e]=nums[i];
                e=e-1;  
            }
            else{
                v[s]=nums[i];
                s=s+1;
            }
        }
        return v;
    }
};