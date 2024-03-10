class Solution {
public:
    string reverseWords(string s) {
        reverse(s.begin(),s.end());
        int i=0;
        
        //main players will be l and r 
        int l=0,r=0;
        
        int n=s.length();
        while(i<n){
            while(i<n and s[i]!=' '){ // i ko agr char dikha toh r ko dega and i++ and r++
                s[r]=s[i];
                r++;
                i++;
            }
            
        if(l<r){
            reverse(s.begin()+l,s.begin()+r);
            s[r]=' '; //gives error if i write s[r]=" ";
            r++;
            
            l=r;
        }
            
            i++;
        }
        cout<<s;
        s=s.substr(0,r-1);
        return s;
    }
};