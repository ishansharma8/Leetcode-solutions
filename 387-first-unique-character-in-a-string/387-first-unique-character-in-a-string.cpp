class Solution {
public:
    int firstUniqChar(string s) {
        map<char,int>mp;
        int n=s.length();
        
        for(int i=0;i<n;i++){
            mp[s[i]]++;
        }
        
        int ans=-1;
        for(int i=0;i<n;i++){
           if(mp[s[i]]==1){
               ans=i;
               break;
           }
        }
        
       
        return ans;
    }
};