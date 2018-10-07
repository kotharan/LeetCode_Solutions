/* Given a binary tree, return the inorder traversal of its nodes' values.

Example:

Input: [1,null,2,3]
   1
    \
     2
    /
   3

Output: [1,3,2] */

//Done By >> Anand S Kothari
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */


class Solution {
public:
    vector<int> inorderTraversal(TreeNode* root) {
        vector<TreeNode*> stack;
        vector<int> res;
        
        while(root!=NULL || stack.size()>0)
        {
            if(root!=NULL)
            {
                stack.push_back(root);
                root = root->left; 
            }else
            {
                root = stack.back(); // Go back to the stack value 
                stack.pop_back();       
                res.push_back(root->val);
                root = root->right;
                
            }
        }
      return res;  
    }
};