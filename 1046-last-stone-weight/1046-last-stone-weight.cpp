class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int>q;
        
        for(int i=0;i<stones.size();i++){
            q.push(stones[i]);
        }
        while(q.size()>1){
            int s1=q.top();
            q.pop();
            int s2=q.top();
            q.pop();
            int diff=s1-s2;
            
            if(diff!=0){
                q.push(diff);
            }
        }
        if(q.size()==0)return 0;
        
        return q.top();
    }
};