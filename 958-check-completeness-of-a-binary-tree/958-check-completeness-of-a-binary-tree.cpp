/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    bool isCompleteTree(TreeNode* root) {
        queue<pair<TreeNode*,int>>q;
        vector<int>v;

        q.push({root,1});
        while(!q.empty())
        {
            int s=q.size();
            for(int i=0;i<s;i++)
            {
                pair<TreeNode*,int>p=q.front();
                q.pop();
                TreeNode*t=p.first;
                int idx=p.second;
                v.push_back(idx);
                int n=v.size()-1;
                if(n>=1 && v[n]!=v[n-1]+1)
                {
                    return false;
                }
                if(t->left)
                    q.push({t->left,idx*2});
                if(t->right)
                    q.push({t->right,idx*2+1});
                
            }
        }
        return true;
    }
};