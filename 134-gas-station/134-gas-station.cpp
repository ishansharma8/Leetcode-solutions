class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int debt=0;
        int fuel=0;
        int index=0;
        for(int i=0;i<gas.size();i++){
            if(fuel<=0){
                debt+=fuel;
                fuel=0;
                index=i;
            }
            fuel+=gas[i]-cost[i];
        }
        if(fuel+debt>=0){
            return index;
        }
        return -1;
    }
};