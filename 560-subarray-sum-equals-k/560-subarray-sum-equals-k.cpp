class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n=nums.size();
        int count=0;
        unordered_map<int,int>mp;
        mp[0]=1;
        
        for(int i=1;i<n;i++){
            nums[i]+=nums[i-1];
        }
        
        for(int i=0;i<n;i++){
            if(mp.find(nums[i]-k)!=mp.end()){
                count+=mp[nums[i]-k];
            }
            
            mp[nums[i]]++;
        }
         
        return count;
    }
    
};