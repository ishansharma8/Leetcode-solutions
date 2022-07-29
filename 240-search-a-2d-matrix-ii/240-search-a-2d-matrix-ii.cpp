class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m=matrix.size();
        int n=matrix[0].size();
        
        int r=0;
        int c=n-1;
        while(c>=0 && r<m){
            int start=matrix[r][c];
            if(start==target){
                return true;
            }
            else if(start>target){
                c--;
            }
            else{//start<target
                r++;               
            }
        }
        return false;
    }
};