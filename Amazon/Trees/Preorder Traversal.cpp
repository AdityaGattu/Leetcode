/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
vector<int> Solution::preorderTraversal(TreeNode* A) {
    
    if(A==NULL)
    {
        return {};
    }
    stack<TreeNode* >s1;
    vector<int>v;
    
    s1.push(A);
    
    while(!s1.empty())
    {
        TreeNode* top=s1.top();
        s1.pop();
        
        
        if(top->right)
        {
            s1.push(top->right);
        }
        
         if(top->left)
        {
            s1.push(top->left);
        }
        
        v.push_back(top->val);
    }
    
    return v;
}
