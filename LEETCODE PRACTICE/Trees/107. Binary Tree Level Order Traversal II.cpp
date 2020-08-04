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
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        
        vector<vector<int>>p;
        
        if(root==NULL)
        {
            return {};
        }
        
        queue<TreeNode*>q;
        
        q.push(root);
        
        while(!q.empty())
        {
            int x=q.size();
            vector<int>curr;
            
            while(x)
            {
                TreeNode* temp=q.front();
                curr.push_back(temp->val);
                q.pop();
                x--;
                
                if(temp->left){q.push(temp->left);}
                if(temp->right){q.push(temp->right);}
            }
            p.push_back(curr);
            
        }
        
        reverse(p.begin(),p.end());
        
        return p;
        
    }
};
