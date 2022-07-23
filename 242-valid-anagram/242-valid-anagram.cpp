class Solution {
public:
    bool isAnagram(string s1, string s2) {
        if(s1.length()!=s2.length()) return 0;
        
        sort(s1.begin(),s1.end());
        sort(s2.begin(),s2.end());
        
        if(s1.compare(s2)==0)return true;
        
    return false;    
    }
};