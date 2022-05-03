class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) {
        vector<int>sorted(nums);
        sort(sorted.begin(),sorted.end());
        int n=nums.size(),s=0,e=n-1;
        while(s<n && nums[s]==sorted[s]){
            s++;
        }
         while(e>s && nums[e]==sorted[e]){
           e--;
        }
        return e-s+1;
    }
};