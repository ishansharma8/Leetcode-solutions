class Solution {
public:
    int findDuplicate(vector<int>& nums) {
         unordered_set<int>s;
        for(auto elem:nums){
            if(s.find(elem)==s.end()){
                s.insert(elem);
            }
            else{
                return elem;
            }
        }
        return -1;
    }
};