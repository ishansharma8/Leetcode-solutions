class Solution {
public:
    bool isPerfectSquare(int num) {
        int low=1,high=num/2;
        if(num==1)return true;
        while(low<=high){
            long long int mid=low+(high-low)/2;
            long long int square=mid*mid;
            
            if(square==num){
                return true;
            }
            else if(num<square){
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return false;
    }
};