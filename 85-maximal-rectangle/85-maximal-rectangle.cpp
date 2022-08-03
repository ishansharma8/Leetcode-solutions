class Solution {
public:
    int largestRectanglearea(vector<int>&nums){
        int maxarea=0;
        int n=nums.size();
        vector<int>nsr(n,-1);
        vector<int>nsl(n,-1);
    
        
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
            
            if(nsl[i]!=-1){
                wl=i-nsl[i]-1;
            }
            
            if(nsr[i]==-1){
                wr=(n-1)-i;
            }
            
            else{
                wr=nsr[i]-i-1;
            }
            int area=(wl+wr+1)*nums[i];
            maxarea=max(area,maxarea);
        }

        return maxarea;
    }
    
    
    
    
    int maximalRectangle(vector<vector<char>>& matrix) {
        int rows=matrix.size();
        int cols=matrix[0].size();
        int ans=0;
        
        vector<int>v(cols,0);
        for(int i=0;i<rows;i++){
            
            for(int j=0;j<cols;j++){
                if(matrix[i][j]=='0'){
                    v[j]=0;
                }
                else{
                    v[j]+=1;
                }
            }
            ans=max(ans,largestRectanglearea(v));
        }
        return ans;
    }
};