class Solution {
public:
    int findDuplicate(vector<int>& nums) {
         unordered_map<int,int>m;
        for(int i=0;i<nums.size();i++){
            m[nums[i]]++;
        }
        for(auto ele:m){
            if(ele.second>1)
                return ele.first;
        }
        return -1;
    }
};