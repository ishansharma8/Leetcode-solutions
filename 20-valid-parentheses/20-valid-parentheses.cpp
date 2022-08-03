class Solution {
public:
    bool isValid(string s) {
        stack<char>st;
        
    //we can place a check to return false if string length is odd ,for even we need to fig it out
        if(s.length()%2!=0)
            return false;
        
        for(int i=0;i<s.length();i++){
            if(s[i]=='(' || s[i]=='{' ||  s[i]=='['){
                st.push(s[i]);
            }
            else{
                 if(st.empty())
                     return false;
                    
                if(s[i]==')'){
                    if(st.top()=='('){
                        st.pop();
                    }
                    else{
                        return false;
                    }
                }
                   
                if(s[i]=='}'){
                    if(st.top()=='{'){
                        st.pop();
                    }
                    else{
                        return false;
                    }
                }
                   
                if(s[i]==']'){
                    if(st.top()=='['){
                        st.pop();
                    }
                    else{
                        return false;
                    }
                }
                   
            }
        }
        if(st.empty()){
            return true;
        };
        return false;
    }
};
