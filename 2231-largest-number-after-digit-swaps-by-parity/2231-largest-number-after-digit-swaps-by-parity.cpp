class Solution {
public:
    int largestInteger(int num) {
    priority_queue<int>odd;
    priority_queue<int>even;
        
    string s=to_string(num);
        
        for(int i=0;i<s.size();i++){
            int currno=s[i];
            if(currno%2==0)
                even.push(currno);
            else
                odd.push(currno);
        }
        
        for(int i=0;i<s.size();i++){
            int currno=s[i];
            if(currno%2==0){
                 s[i]=even.top();
                 even.pop();
            }
               
            else{
                s[i]=odd.top();  //or do +48
                odd.pop();
            }
        }
        
            return stoi(s);

    }
};