class Solution {
public:
    
    struct greaterK{
        bool operator()(pair<int,string>&a,pair<int,string>&b){
            if(a.first==b.first){
                return a.second<b.second;
            }
            return a.first>b.first;
        }
    };
    
    #define pii pair<int,string>
    vector<string> topKFrequent(vector<string>& words, int k) {
        
        unordered_map<string,int>ump;
        for(string x:words){
            ump[x]++;
        }
        
        //pq mei hum rkh rhe hai sbse jaada occur hone vale k elements nd shouldd be lexo 
    priority_queue<pii ,vector<pii>,greaterK>pq; //this vector part is writen for comprsn 
        for(auto x:ump){
            pq.push({x.second,x.first});//1st para is freq and 2nd para is string 
            //agar k se jaada hogya,then pop the min occur element
            if(pq.size()>k){
                pq.pop();
            }
        }
        vector<string>ans;
        while(!pq.empty()){
            ans.push_back(pq.top().second);
            pq.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};