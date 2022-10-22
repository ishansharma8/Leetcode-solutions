class Solution {
public:
    bool sumOfNumberAndReverse(int num) {
      
      if(num==0)return true;
      if(num<9){
        for(int i=0;i<num;i++){
          if(2*i==num)return true;
        }
          return false;
  
      }
        for(int i=num/2;i<num;i++){
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