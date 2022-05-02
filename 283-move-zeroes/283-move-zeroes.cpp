class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n=nums.size();
        int s=0;
        int e=n-1;
        int count=0;
        for(int i=0;i<n;i++){
            if(__builtin_popcount(nums[i])!=0){
                nums[s]=nums[i];
                s++;
                count++;
                cout<<count;
            }
        }
        
            for(int i=0;i<(n-count);i++){
                nums[e]=0;
                e--;
            }
    }
};