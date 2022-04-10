class Solution {
public:
    int calPoints(vector<string>& ops) {
        int n=ops.size();
        vector<int>v;
        int j=-1;
        for(int i=0;i<n;i++){
            if(ops[i]=="C"){
                v.pop_back();
                j--;
            }
            else if(ops[i]=="+"){
                v.push_back(v[j]+v[j-1]);
                    j++;
            }
            else if(ops[i]=="D"){
                v.push_back(v[j]*2);
                j++;
            }
            else{
                v.push_back(stoi(ops[i]));
                    j++;
            }
        }
        int sum =accumulate(v.begin(), v.end(), 0);
        return sum;
    }
};