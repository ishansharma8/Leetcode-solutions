class Solution {
public:
    int convertTime(string current, string correct) {
        string h1="";
        string m1="";
        string h2="";
        string m2="";
        
        h1=h1+current[0];
        h1=h1+current[1];
        
        m1=m1+current[3];
        m1=m1+current[4];
        
        h2=h2+correct[0];
        h2=h2+correct[1];
        
        m2=m2+correct[3];
        m2=m2+correct[4];
        
        int mi1=stoi(h1)*60+stoi(m1);
        int mi2=stoi(h2)*60+stoi(m2);
        
        int diff=mi2-mi1;
        int count=0;
        while(diff!=0){
            if(diff>=60){
                diff=diff-60;
                count++;
            }
            else if(diff>=15){
                diff=diff-15;
                count++;
            }
            else if(diff>=5){
                diff=diff-5;
                count++;
            }
            else{
                diff=diff-1;
                count++;
            }
            
        }
        return count;
        
        
    }
};