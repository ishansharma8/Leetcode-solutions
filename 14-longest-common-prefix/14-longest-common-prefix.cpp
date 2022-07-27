class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        sort(strs.begin(),strs.end());
        string s1=strs[0];
        string s2=strs[strs.size()-1];
        string ans="";
        
        int l=min(s1.length(),s2.length());
        for(int i=0;i<l;i++){
            if(s1[i]==s2[i]){
                ans+=s1[i];
            }
            else{
                break;
            }
        }
        return ans;
    }
};