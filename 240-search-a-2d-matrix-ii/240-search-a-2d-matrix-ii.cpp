class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m=matrix.size();
        int n=matrix[0].size();
        
        int row=0;
        int col=n-1;
        while(col>=0 && row<m){
            int start=matrix[row][col];
            if(start==target){
                return true;
            }
            else if(start>target){
                col--;
            }
            else{//start<target
                row++;               
            }
        }
        return false;
    }
};