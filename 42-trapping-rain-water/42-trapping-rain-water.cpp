class Solution {
public:
    int trap(vector<int>& height) {
      int i = 0;
      int j = height.size() - 1;
        
      int maxleft = height[i];
      int maxright = height[j];
      int result=0;
      
      while(i<j){
//we decide which cell to compute and which pointer to shift depending upon the comparision beteen maxes
        if(maxleft<= maxright){                            //shifting the left pointer
          i++;
          maxleft=max(maxleft,height[i]);
          result+=maxleft-height[i];
        }
        else{
          j--;
          maxright=max(maxright,height[j]);
          result+=maxright-height[j];
        }
      }
      return result;
    }
};