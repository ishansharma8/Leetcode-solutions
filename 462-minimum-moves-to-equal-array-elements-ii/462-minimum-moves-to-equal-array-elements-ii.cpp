class Solution {
public:
    int minMoves2(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        int median=n/2;
        int elem=nums[median];
        int sum=0;
        
        for(int i=0;i<n;i++){
            if(nums[i]<elem){
                sum+=elem-nums[i];
            }
            else{
                sum+=nums[i]-elem;
            }
        }
        return sum;
    }
};