class Solution {
public:
    bool isPowerOfThree(int n) {
      if(n==0)
        return false;
      
        while(n%3==0){     //  fails on 19684
          n/=3;
        }
      if(n==1)
        return true;
    else
      return false;
    }
};