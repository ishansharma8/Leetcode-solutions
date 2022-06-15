class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int i=0;int j=nums.size()-1;
        vector<pair<int,int>>num;
        for(int i=0;i<nums.size();i++){
            num.push_back({nums[i],i});
        }
        sort(num.begin(),num.end());
        vector<int>ans;
        while(i<j){
            int sum=num[i].first+num[j].first;
            if(sum<target){
                i++;
            }
            else if(sum>target){
                j--;
            }
            else{
                ans.push_back(num[i].second);   
                ans.push_back(num[j].second);
                return ans;
            }
            
        }
        return ans;
    }
};