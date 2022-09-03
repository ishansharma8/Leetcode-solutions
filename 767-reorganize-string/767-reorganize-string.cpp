class Solution {
public:
    string reorganizeString(string s) {
      priority_queue<pair<int,char>>pq;
      string ans="";
      
      unordered_map<char,int>ump;
      for(char c:s){    //or for(auto c:s)
        ump[c]++;
      }
      
      for(auto x:ump){
        pq.push({x.second,x.first});  //freq,char pair
      }
        
      while(pq.size()>1){
        auto top1=pq.top();
        pq.pop();
        auto top2=pq.top();
        pq.pop();
        
        ans+=top1.second;
        ans+=top2.second;
        
            top1.first-=1;
            top2.first-=1;   //   top1.first--;
                              //   top2.first--;
        
        if(top1.first>0){
          pq.push(top1);
        }
        if(top2.first>0){
          pq.push(top2);
        }
        }
        
        if(pq.size()==1){
          if(pq.top().first>1){
            return "";
          }
          else{
            ans+=pq.top().second;
          }
        }
      
      return ans; 
    }
};