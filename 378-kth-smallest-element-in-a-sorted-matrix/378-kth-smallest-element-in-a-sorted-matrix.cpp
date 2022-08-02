class Solution {
public:
    int kthSmallest(vector<vector<int>>& matrix, int k) {
        priority_queue<int>maxheap;
        int n=matrix.size();
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                maxheap.push(matrix[i][j]);
                if(maxheap.size()>k){
                maxheap.pop();
                    }
                }
            }    
        return maxheap.top();
    }
};