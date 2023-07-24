// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
      int l=1;
      int h=n;
      int mid=0;
      int ans=INT_MAX;
      while(l<=h){
         mid=l+(h-l)/2;
        if(isBadVersion(mid)==true){
          h=mid-1;
          ans=min(ans,mid);
        }
        else{
          l=mid+1;
        }
      }
        return ans;
    }
};

//1 2 3 
// l=1;
// h=3;
// mid=2;

// l=1;
// h=1;

