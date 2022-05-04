class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        int s=0;
        int e=n-1;
        int count=0;
        for(int i=0;i<n;i++){
            if(nums[s]+nums[e]==k){
                count++;
                s=s+1;
                e=e-1;
                if(s>=e){
                    break;
                }
            }
                
            else if((nums[s]+nums[e])<k){
                s=s+1;
                if(s==e){
                        break;
                    }
            }
                else{
                    e=e-1;
                    if(s==e){
                        break;
                    }
                }
        }
        return count;
    }
};