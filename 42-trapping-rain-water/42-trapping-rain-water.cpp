class Solution {
public:
    int trap(vector<int>& height) {
      int n=height.size();
      vector<int>maxleft(n);
      vector<int>maxright(n);
      maxleft[0]=height[0];  //dont make mistake of setting maxleft[0]=0;
      maxright[n-1]=height[n-1];
      
      for(int i=1;i<n;i++){
        maxleft[i]=max(maxleft[i-1],height[i]);//max of(prev ,curr)
      }
      
      for(int i=n-2;i>=0;i--){
        maxright[i]=max(maxright[i+1],height[i]);
      }
      
      int watertrapped=0;
      int ans=0;
      for(int i=0;i<n;i++){
        ans=min(maxright[i],maxleft[i])-height[i];
        if(ans>0){
          watertrapped+=ans;
        }
      }
      return watertrapped;
    }
};