class Solution {
public:
    bool sumOfNumberAndReverse(int num) {
      
        for(int i=num/2;i<=num;i++){
          string ans=to_string(i);
          reverse(ans.begin(),ans.end());
          int revans=stoi(ans);
          if(i+revans==num){
            return true;
          }
        }
      return false;
    }
};