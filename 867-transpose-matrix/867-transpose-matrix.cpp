class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& a) {
        int m=a.size();
        int n=a[0].size();
        vector<vector<int>>B(n,vector<int>(m,0));
        for(int j=0;j<n;j++)
            for(int i=0;i<m;i++)
                B[j][i]=a[i][j];
        return B;
                
    }
};