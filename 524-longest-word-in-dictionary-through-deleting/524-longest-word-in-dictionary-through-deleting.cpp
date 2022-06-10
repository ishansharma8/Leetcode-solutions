class Solution {
public:
    string findLongestWord(string s, vector<string>& dict) {
        string ans="";
        cout<<"my size is:"<<ans.size();
        for(int k=0;k<dict.size();k++){
            string t=dict[k];
            
            int i=0,j=0;
            while(i<s.size() && j<t.size()){
                if(s[i]==t[j]){
                    i++;
                    j++;
                }
                else{
                    i++;
                }
            }
            //cout<<ans.size()<<endl;
            if(t.size()==j){
                if(ans.size()<t.size() || (ans.size()==t.size() && (t<ans))){
                    ans=t;
                    //cout<<ans<<" ";
                }
            }
            
        }
        return ans;
    }
};