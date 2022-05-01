class Solution {
public:
    bool backspaceCompare(string s, string t) {
        // if(s[0]=='#' && t[0]!='#'){
        //     return false;
        // }
        // if(t[0]=='#' && s[0]!='#'){
        //     return false;
        // }
        
        
        
        stack<char>s1;
        for(int i=0;i<s.length();i++){
            if(s[i]!='#'){
                s1.push(s[i]);
                //cout<<s1.top();
            }
            else{ 
                if(s1.size()==0){
                    cout<<"it reached";
                    continue;
                }
                s1.pop();
            }
        }
        
        stack<char>s2;
        for(int i=0;i<t.length();i++){
            if(t[i]!='#'){
                s2.push(t[i]);
               // cout<<s2.top();
            }
            else{
                if(s2.size()==0){
                    continue;
                }
                s2.pop();
            }
        }
        // cout<<s2.top();
        // s2.pop();
        // cout<<s2.top();
        // s2.pop();
       if(s1.size()!=s2.size()){
           return false;
       }
            int a=s1.size();
          for(int i=0;i<=a;i++){
              if(s1.size()==0){
                  cout<<"chla";
                  return true;
                  
              }
              if(s1.top()==s2.top()){
                  // cout<<s1.top();
                  // cout<<s2.top();
                  s1.pop();
                  s2.pop();
                  
                  
              }
          }  
            
    return false;
    }
};