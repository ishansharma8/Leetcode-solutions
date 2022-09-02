class Solution {
public:
    int characterReplacement(string s, int k) {
      vector<int>count(26,0);
      int maxcount=0;
      
      int i=0;
      int j=0;
      
      int result=0;
      
      while(j<s.size()){
        count[s[j]-'A']++;
        maxcount=max(maxcount,count[s[j]-'A']);
        if(j-i+1 -maxcount>k){
        count[s[i]-'A']--;  //bcoz we are moving the left side of window
        i++;
        }
        result=max(result,j-i+1);
        j++;
      }
        return result;
    }
};