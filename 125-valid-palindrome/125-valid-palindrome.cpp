class Solution {
public:
    bool isPalindrome(string s) {
        string forward="";
      
      for(auto x:s){
        if(isalnum(x)){
          forward.push_back(tolower(x));
        }
      }
      string backward=forward;
      reverse(backward.begin(),backward.end());
      return forward==backward;
    }
};