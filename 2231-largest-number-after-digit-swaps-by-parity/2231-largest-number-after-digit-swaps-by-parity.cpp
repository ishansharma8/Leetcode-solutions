class Solution {
public:
    int largestInteger(int num) {
    priority_queue<int>odd;
    priority_queue<int>even;
        
    string s=to_string(num);
        
        for(int i=0;i<s.size();i++){
            int currno=s[i]-'0';
            if(currno%2==0)
                even.push(currno);
            else
                odd.push(currno);
        }
        
        for(int i=0;i<s.size();i++){
            int currno=s[i]-'0';
            if(currno%2==0){
                 s[i]=even.top()+'0';
                 even.pop();
            }
               
            else{
                s[i]=odd.top()+'0';  
                odd.pop();
            }
        }
        
            return stoi(s);

    }
};