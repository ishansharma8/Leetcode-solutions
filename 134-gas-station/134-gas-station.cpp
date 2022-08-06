class Solution {
public:
    int canCompleteCircuit(vector<int>& petrol, vector<int>& cost) {
        int n=petrol.size();
        int balance=0;
        int loss=0;
        int start=0;
        
        for(int i=0;i<n;i++){
            balance =balance+(petrol[i]-cost[i]);
            if(balance<0){
                start=i+1;
                loss+=balance;
                balance=0;
                
            }
        }
        
        if(balance+loss >=0){
            return start;
        }
        else
            return -1;

    }
};