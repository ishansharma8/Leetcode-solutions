// and we know 'true && true' is true
// so true will be returned to caller, and thus tree is mirror of itself.
// Similarly you can check for any testcase, flow of execution will remain same.
}
bool isSymmetric(TreeNode* root)
{
// Imagine a tree:    1
//                 2     2
//               3   4 4   3
// We are standing on root that is 1, function begins
// and now r1 and r2 points to 2 and 2 respectively.
return solve(root->left, root->right);
}
};
​
https://leetcode.com/problems/symmetric-tree/discuss/1398964/C%2B%2B-or-Recursive-or-Well-Commented
​
​
2)at line 23 dont write
(helper(r1->left,r2->right) && helper(r1->right,r2->left);
or      return(r1->left,r2->right && r1->right,r2->left);
both are wrong
​