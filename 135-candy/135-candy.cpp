class Solution {
public:
    int candy(vector<int>& ratings) {
        int n=ratings.size();
        vector<int>v1(n,1);
        vector<int>v2(n,1);
        
        for(int i=1;i<n;i++){
            if(ratings[i]>ratings[i-1])
                v1[i]=v1[i-1]+1;
        }
        // for(int i=0;i<n;i++){
        //     cout<<v1[i]<<" ";
        // }
        // cout<<endl;
        for(int i=n-2;i>=0;i--){
            if(ratings[i]>ratings[i+1])
                v2[i]=v2[i+1]+1;
        }
        // for(int i=0;i<n;i++){
        //     cout<<v2[i]<<" ";
        // }
        for(int i=0;i<n;i++){
            v1[i]=max(v1[i],v2[i]);
        }
         
        return accumulate(v1.begin(),v1.end(),0);
        
    }
};