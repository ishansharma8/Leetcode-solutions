class Solution {
public:
    int largestRectangleArea(vector<int>& nums) {
        int n=nums.size();
        vector<int>nsr(n,-1);
        vector<int>nsl(n,-1);
        int ans=0;
        
        stack<int>s1;
        for(int i=n-1;i>=0;i--){
            while(!s1.empty() && nums[s1.top()]>=nums[i]){
                s1.pop();
            }
            if(!s1.empty()){
                nsr[i]=s1.top();
            }
            s1.push(i);
        }
        
        stack<int>s2;
        for(int i=0;i<n;i++){
            while(!s2.empty() && nums[s2.top()]>=nums[i]){
                s2.pop();
            }
            if(!s2.empty()){
                nsl[i]=s2.top();
            }
            s2.push(i);
        }
      
        int wl=0,wr=0;
        for(int i=0;i<n;i++){
            if(nsl[i]==-1){
                wl=i;
            }
            
            else{
                wl=i-nsl[i]-1;
            }
            
            if(nsr[i]==-1){
                wr=(n-1)-i;
            }
            
            else{
                wr=nsr[i]-i-1;
            }
            int width=(wl+wr+1)*nums[i];
            ans=max(ans,width);
        }
        
        return ans;
            
    }
};