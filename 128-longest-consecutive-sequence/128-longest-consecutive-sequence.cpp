class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> box;
        int ans=1;
        if(nums.empty()){
            return 0;
        }
     
        for(int i=0;i<nums.size();i++){
            box.insert(nums[i]);
        }
        for(int i=0;i<nums.size();i++){   //o(n)
        
            int start=nums[i];
             if(box.find(start-1)!=box.end()) continue;
            while(box.find(start)!=box.end()){
                start++;
            }
           ans=max(ans,start-nums[i]);
        }
        return ans;
        
        
    }
};