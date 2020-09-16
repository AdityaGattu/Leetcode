/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
 vector<int>v;
 void helper(TreeNode* root)
 {
     
     if(root->left)helper(root->left);
     v.push_back(root->val);
     if(root->right)helper(root->right);
 }
int Solution::kthsmallest(TreeNode* A, int B) {
    
    v.clear();
    helper(A);
    return v[B-1];
    
}

