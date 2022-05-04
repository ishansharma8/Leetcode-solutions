// Now again r1->left is null and r2->right is null
// So they will return true from first if condtion
// Now the scene is : we have executed first solve() before && and it has
// returned us True so expression becomes ' return true && solve() '
// Now solve after && will execute
// Similarly it will check for 4 and 4 , it will by pass if else statements
// next time both will become null, so will return true
// Thus 2nd solve() at the end will also hold true
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