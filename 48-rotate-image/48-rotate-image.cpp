class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
      int left=0,right=matrix.size()-1;
      while(left<right){
        for(int i=0;i<(right-left);i++){
          int top=left,bottom=right;
          
          //save the top left
          int topleft=matrix[top][left+i];
          
          //move bottom left to top left
          matrix[top][left+i]=matrix[bottom-i][left];
            
          //move bottom right to bottom left
          matrix[bottom-i][left]=matrix[bottom][right-i];
            
            
          //move top right to bottom right
          matrix[bottom][right-i]=matrix[top+i][right];
          
          //move our top left to top right
          matrix[top+i][right]=topleft;
        }
        left++;
        right--;
      }
      
        
    }
};