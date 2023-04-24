class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int>q(stones.begin(),stones.end());
        
        // for(int i=0;i<stones.size();i++){
        //     q.push(stones[i]);
        // }
        while(q.size()>1){
            int s1=q.top();
            q.pop();
            int s2=q.top();
            q.pop();
            q.push(s1-s2);
        }
        // if(q.size()==0)return 0;
        // return q.top();
        
        return q.size()==0 ? 0 : q.top();
    //or return q.empty()? 0 : q.top(); 
    }
};