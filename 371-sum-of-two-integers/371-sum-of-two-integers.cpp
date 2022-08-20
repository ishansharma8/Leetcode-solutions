class Solution {
public:
    int getSum(int a, int b) {
      int sum=0,carry=0;
      
      if(b==0){
        return a;
      }
      while(b!=0){   //while xor of left shift of & and result!=0
        sum=a ^ b;
        carry=(a & b);
        b=(unsigned int)carry<<1;
        a=sum;
      }
      
      return sum ;
    }
};

// xor till u get and of the two numbers as 0(if u get 1 means thers a carry which needs to be added) 
//   if not do and of the two and use that as carry