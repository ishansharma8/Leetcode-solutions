// { Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function template for C++

class Solution 
{
    public:
    //Function to find if there is a celebrity in the party or not.
    int celebrity(vector<vector<int> >& M, int n) 
    {
        int rows=M.size();
        int cols=M[0].size();
        
        int low =0;
        int high=n-1;
        
        while(low<high){
            if(M[low][high]==1){
                ++low;
            }
            else{
                --high;
            }
        }
        for(int i=0;i<n;i++){
            if(i!=low){
                if(M[i][low]==0 ||M[low][i]==1){// no celebrity bcoz we wanted simultaneos satisfaction of both conditions
                    return -1;
                }
            }
        }
        return low;
        
    }
};

// { Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<vector<int> > M( n , vector<int> (n, 0));
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                cin>>M[i][j];
            }
        }
        Solution ob;
        cout<<ob.celebrity(M,n)<<endl;

    }
}
  // } Driver Code Ends