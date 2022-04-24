class Solution {
public:
vector<int> postorderTraversal(TreeNode* root) {
vector<int>v;
if(root==NULL){
return {};  //return vector<int>();
}
postorderTraversal(root->left);
postorderTraversal(root->right);
v.push_back(root->val);
cout<<root->val;
return v;
}
};
​
​
​
why is this not working as on cout it prints the sequence but not in root