class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& nums) {
        int n=nums.size();
        stack<int>s;
        vector<int>ngr(n,0);
        
        for(int i=n-1;i>=0;i--){
            while(!s.empty() && nums[s.top()]<=nums[i] ){
                s.pop();
            }
            if(!s.empty()){
                ngr[i]=s.top();
            }
            s.push(i);
        }
        //return ngr;
        
        for(int i=0;i<n;i++){
            if(ngr[i]!=0){
            ngr[i]=ngr[i]-i;
                }
        }
        return ngr;
    }
};