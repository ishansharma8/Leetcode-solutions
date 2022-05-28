class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int sumarr=0;
        for(int i=0;i<nums.size();i++)
            sumarr=sumarr+nums[i];
        int n=nums.size();
        int expectedsum=(n*(n+1))/2;
        int reqnum=expectedsum-sumarr;
            return reqnum;
        
    }
};