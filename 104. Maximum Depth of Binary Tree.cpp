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
    int maxDepth(TreeNode* root) {
        
        int cnt1=0,cnt2=0;
        if(root==NULL){return 0;}
        if(root){cnt1=maxDepth(root->left);}
        if(root){cnt2=maxDepth(root->right);}
        
        return max(cnt1+1,cnt2+1);
        
    }
};
