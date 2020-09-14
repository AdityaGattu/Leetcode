/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
vector<int> Solution::postorderTraversal(TreeNode* A) {
    
    if(A==NULL){return {};}
    
    stack<TreeNode* >s1;
    stack<TreeNode* >s2;
    vector<int>v;
    
    s1.push(A);
    
    while(!s1.empty())
    {
        TreeNode* temp=s1.top();
        s1.pop();
        
        s2.push(temp);
        
        if(temp->left)
        {
            s1.push(temp->left);
        }
        
        if(temp->right)
        {
            s1.push(temp->right);
        }
        
    }
    
    while(!s2.empty())
    {
        TreeNode* t=s2.top();
        v.push_back(t->val);
        s2.pop();
    }
    return v;
}
