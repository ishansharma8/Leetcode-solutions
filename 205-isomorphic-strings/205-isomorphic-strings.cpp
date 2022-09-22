class Solution {
public:
    bool isIsomorphic(string s, string t) {
        int m1[256]={0}, m2[256]={0};
        int count = 1;
        for(int i=0; i<s.length(); i++) {
            if(m1[s[i]]!=m2[t[i]]) return false;
            if(m1[s[i]]==0) {
                m1[s[i]]=count;
                m2[t[i]]=count;
                count++;
            }
        }
        return true;
    }
};