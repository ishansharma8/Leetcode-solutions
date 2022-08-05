class Solution {
public:
    string findLongestWord(string s, vector<string>& dictionary) {
        string ans="";
        
        
        for(int d=0;d<dictionary.size();d++){
            string temp=dictionary[d];
            int i=0;
            int j=0;
            
            while(i<s.size() && j<temp.size()){
                if(s[i]==temp[j]){
                    i++;
                    j++;
                }
                else{          //if(s[i]!=temp[j])
                    i++;
                }
            }
            
            if(j==temp.size()){
            if(ans.size()<temp.size() || (ans.size()==temp.size() && (temp<ans))){
                ans=temp;
            }
            }
        }
        
        return ans;
    }
};