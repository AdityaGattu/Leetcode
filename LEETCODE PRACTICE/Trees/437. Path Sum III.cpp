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
    int count=0;
    
    
    int pathSum(TreeNode* root, int sum) {
        
       
        preorder(root,sum);  
        return count;
    }
    
        void preorder(TreeNode* root,int s)
        {
            if(root==NULL){return;}
            findpath(root,s);
            preorder(root->left,s);
            preorder(root->right,s);
        }
    
         void findpath(TreeNode* root, int sum)
         {
           if(root==NULL){return;}
             
           if(sum-root->val==0)
           {
            count++;
           }
        
            findpath(root->left,sum-root->val) ;
            findpath(root->right,sum-root->val);
         }
};
