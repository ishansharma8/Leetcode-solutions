class Solution {
public:
    int arrangeCoins(int n) {
        int i=1;
        if(n==1)return 1;
        
        while(n-i>=0){
            n=n-i;
            i++;
        }
        return i-1;
    }
};