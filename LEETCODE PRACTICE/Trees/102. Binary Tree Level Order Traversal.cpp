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
    vector<vector<int>> levelOrder(TreeNode* root) {
        
        vector<vector<int>>p;
        
        
          if(root==NULL)
        {
            return {};
        }
        
        queue< TreeNode* >q;
        
        q.push(root);
        
       while(!q.empty())
       {
           vector<int>curr;
           int x=q.size();
           TreeNode* s;
           while(x)
           {
               s=q.front();
               curr.push_back(s->val);
               q.pop();
               x--;
               if(s->left)q.push(s->left);
               if(s->right)q.push(s->right);
           }
           p.push_back(curr);
           
       }
        
        return p;
        
    }
    
    
};
