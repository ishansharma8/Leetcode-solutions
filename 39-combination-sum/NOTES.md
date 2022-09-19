Printed all
void solve(vector<int>& candidates, int target,int sum,int start,vector<int>& current,vector<vector<int>>&result){
if(sum>target){
return;
}
if(target==sum){
result.push_back(current);
return;
}
for(int i=0;i<candidates.size();i++){
current.push_back(candidates[i]);
solve(candidates,target,sum+candidates[i],i,current,result);
current.pop_back();
}
}