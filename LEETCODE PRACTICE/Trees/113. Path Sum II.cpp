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
    vector<vector<int>> pathSum(TreeNode* root, int sum) {
        
        vector<vector<int>>p;
        vector<int>c;
        path(root,sum,c,p);
        
        return p;
        
    }
    
    void path(TreeNode* root, int sum,vector<int>curr,vector<vector<int>> &p)
    {
        if(root==NULL)
        {
            return;
        }
        
        curr.push_back(root->val);
        
        if(root->left == NULL && root->right==NULL && sum-root->val==0)
        {
            p.push_back(curr);
            return;
        }
        
        path(root->left,sum-root->val,vector<int>(curr),p);
        path(root->right,sum-root->val,vector<int>(curr),p);
    }
};
