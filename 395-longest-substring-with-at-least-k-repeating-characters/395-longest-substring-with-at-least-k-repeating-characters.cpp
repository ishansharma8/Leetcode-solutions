class Solution {
public:
    int longestSubstring(string s, int k) {
        if(k>s.length()){
            return 0;
        }
        return helper(s,0,s.length()-1,k);
    }
    
    int helper(string &s,int begin,int end,int k){
        // if((end-begin+1)<k)
        // {
        //     return 0;
        // }
      
        if(end<begin){
            return 0;//in case of 1st char j-1=0-1=-1    start=0,end=-1
        }
        
        cout<<begin<<" "<<end<<endl;
        unordered_map<char,int>mp;
        for(int i=begin;i<=end;i++){
            mp[s[i]]++;  
        }
        
       // for(auto i:mp){cout<<i.first<<" "<<i.second<<endl;}
        int ans=end-begin+1;
        for(int j=begin;j<=end;j++){
            if(mp[s[j]]<k){
                int left=helper(s,begin,j-1,k);
                int right=helper(s,j+1,end,k);
                ans=max(left,right);
                return ans;
            }            
        }
        return ans;
    }
    
    
};