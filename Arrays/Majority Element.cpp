class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int candidate=nums[0];
        int votes=1,f=0;
        int n=nums.size();
        for(int i=1;i<n;i++){
            if(nums[i]==candidate){
                votes++;
            }
            else {
                votes--;
            }
            if(votes==0){
                candidate=nums[i];
            votes=1;}
        }
        for(int i=0;i<n;i++){
            if (nums[i]==candidate)f++;
        }
        if(f>n/2)
            return candidate; 
        return -1;
    }
    
};
