class Solution {
public:
    int numMatchingSubseq(string s, vector<string>& words) {
        int w=words.size();
        int count=0;
        vector<vector<int>>charindexes(26); 
        for(int i=0;i<s.size();i++){
            charindexes[s[i]-'a'].push_back(i);
            //ith position pe present hai s[i] vala character
        }
        
        
        for(int i=0;i<words.size();i++){
            bool isSubseq=true;
            int lastcharindex=-1;
            for(char w:words[i]){
                auto it=upper_bound(charindexes[w-'a'].begin(),charindexes[w-'a'].end(),lastcharindex);//means b.begin( to b.end() or basically 1.begin to 1.end matlab uss 1 index vale array mei dhundo )
                if(it==charindexes[w-'a'].end()){
                    isSubseq=false;
                    break;
                }
                else{
                    lastcharindex=*it;
                }
                    
            }
            if(isSubseq)
                count++;
        }
        return count;
        
    }
};