class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m=matrix.size();//rows
        int n=matrix[0].size();//cols
        
        
        int low=0;
        int high=m-1;
        while(low<=high){
            int middle=(low+high)/2;
            int firstelem=matrix[middle][0];//col no fixed last col
            
            if(firstelem==target){
                
                return true;
            }
            else if(target<firstelem){
                high=middle-1;
                //cout<<high;
            }
            else {  //target>firstelem
                low=middle+1;                                                   
            }
        }
            
            int row=high;
            if(row<0){
                return false;
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