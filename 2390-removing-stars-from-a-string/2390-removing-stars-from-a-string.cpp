class Solution {
public:
    string removeStars(string s) {
        stack<char>st;
        
        for(int i=0;i<s.length();i++){
            if(s[i]!='*'){
                st.push(s[i]);
            }
            else{
                st.pop();
            }
        }
        string ans="";
        cout<<"reached1";
        int size=st.size();
        for(int i=0;i<size;i++){
            ans+=st.top();
            st.pop();
     
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};