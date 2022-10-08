while(!q.empty()){
for(int i=0;i<q.size();i++){
TreeNode* node=q.front();
q.pop();
curr.push_back(node->val);
if(node->left){
q.push(node->left);
}
if(node->right){
q.push(node->right);
}
}
ans.push_back(curr[curr.size()-1]);
curr.clear();
//cout<<ans[0];
}
,, this code wont work bcoz i am iterating for loop as for(i->,i<q.size(); )
and in between i am inc/dec size of q ,so thats not giving correct result ,so best way i s to store the size of q in a variable count