class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n=nums.size();
        int i=0,j=n-1,k=n-1,chosenelem=0;
        vector<int>ans(n,0);
        
        while(i<=j){
            if(abs(nums[i])<abs(nums[j])){
                chosenelem=nums[j];
                j--;
            }
           else{
               chosenelem=nums[i];
               i++;
           }
               ans[k]=chosenelem*chosenelem;
               k--;               
        }
        return ans;
    }
};