class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        
        
        int ans;
        int finalans=0;
        
        int n=heights.size();
        if(n==1){
            return heights[0];
        }
        
          
        stack<int>s; 
        
        vector<int>nsr(n,-1);
               
        for(int i=n-1;i>=0;i--){
            while(!s.empty() && heights[s.top()]>=heights[i]){
                s.pop();
            }
            
            if(!s.empty()){
                nsr[i]=s.top();
            }
            
            s.push(i);
        }
        // cout<<nsr[0]<<endl;// cout<<nsr[1]<<endl;// cout<<nsr[2]<<endl;// cout<<nsr[3]<<endl;
        // cout<<nsr[4]<<endl;// cout<<nsr[5]<<endl;
        
        
        
        
        
          
        stack<int>s1; 
        
        vector<int>nsl(n,-1);
               
        for(int i=0;i<n;i++){
            while(!s1.empty() && heights[s1.top()]>=heights[i]){
                s1.pop();
            }
            
            if(!s1.empty()){
                nsl[i]=s1.top();
            }
            
            s1.push(i);
        }  
        
        // cout<<nsl[0]<<endl;// cout<<nsl[1]<<endl;// cout<<nsl[2]<<endl;// cout<<nsl[3]<<endl;
        // cout<<nsl[4]<<endl;// cout<<nsl[5]<<endl;
        
        
        
        int wl=0;
        int wr=0;
        for(int i=0;i<n;i++){
            if(nsl[i]==-1){
                wl=i;
            }
            else{
                wl=i-nsl[i]-1;
            }
            
            if(nsr[i]==-1){
                wr=n-i-1;
            }
            else{
                wr=nsr[i]-i-1;
            }
            
           // cout<<wl<<" "<<wr<<endl;
            
            ans=(wl+wr+1)*heights[i];
            finalans=max(ans,finalans);
            
            finalans=max(ans,finalans);
            
        }
       
    return finalans;    
        
    }
};