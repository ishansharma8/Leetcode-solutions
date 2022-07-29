class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m=matrix.size();//rows
        int n=matrix[0].size();//cols
        
        int elem;
        int row=0;
        
        for(int i=0;i<m;i++){
            elem=matrix[i][n-1];
            if(target<=elem){
                row=i;
                break;
            }
        }

            int l=0;
            int h=n-1;
            while(l<=h){
                int mid=(l+h)/2;
                int midelem=matrix[row][mid];
                if(midelem==target){
                    return true;
                }
                else if(target>midelem){
                    l=mid+1;
                }
                else{
                    h=mid-1;
                }
            }
    
        return false;
    }
};