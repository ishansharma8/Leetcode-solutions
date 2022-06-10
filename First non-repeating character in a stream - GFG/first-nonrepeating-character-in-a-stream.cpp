// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
	public:
		string FirstNonRepeating(string A){
		   
		    int l=A.length();
		    string ans;
		    int pointer=0;
		    vector<int>cnt(26,0);
		    for(int i=0;i<l;i++){
		        cnt[A[i]-'a']++;
		        
		        while(pointer<=i && cnt[A[pointer]-'a']>1){
		            ++pointer;
		        }
		        
		        if(pointer>i){
		            ans.push_back('#');
		        }
		        else
		        ans.push_back(A[pointer]);
		    }
		
		    
		    
		    
		    return ans;
		   
		}

};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		string A;
		cin >> A;
		Solution obj;
		string ans = obj.FirstNonRepeating(A);
		cout << ans << "\n";
	}
	return 0;
}  // } Driver Code Ends