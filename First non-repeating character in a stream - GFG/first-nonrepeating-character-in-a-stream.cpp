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
		    queue<int>q;
		    
		    for(int i=0;i<l;i++){
		        
		        cnt[A[i]-'a']++;
		        q.push(A[i]-'a');
		        
		        while(!q.empty() && cnt[q.front()]>1){
		            q.pop();
		        }
		        if(q.empty()){
		            ans.push_back('#');
		        }
		        else{
		            ans.push_back(q.front()+'a');
		        }
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