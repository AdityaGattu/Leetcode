/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
vector<int> Solution::inorderTraversal(TreeNode* A) {
    
    vector<int>v;
    TreeNode* curr=A;
    stack<TreeNode* > s;
    
    while(curr!=NULL || !s.empty())
    {
        
        while(curr!=NULL)
        {
            s.push(curr);
            curr=curr->left;
        }
        curr=s.top();
        s.pop();
        
        
        v.push_back(curr->val);
        
        curr=curr->right;
        
    }
    return v;
}
