class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
      vector<vector<int>> output;
      int n=intervals.size();
      sort(intervals.begin(),intervals.end());
      output.push_back(intervals[0]);
      int prev_last,curr_start;
      
      for(int i=1;i<n;i++){
        curr_start=intervals[i][0];
        prev_last=output[output.size()-1][1];  //bcoz we want the last element of output ,if i=2 ,it need not be at output[1][1] ,it can be output[0][1]
         cout<<i;

        //cout<<curr_start<<prev_last;
        
        if(curr_start<=prev_last){
          output[output.size()-1][1]=max(prev_last,intervals[i][1]);
        }
        
        else{
          output.push_back(intervals[i]);
          // {intervals[i][0],intervals[i][1]}
        }
      }
      
      return output;
        
    }
};