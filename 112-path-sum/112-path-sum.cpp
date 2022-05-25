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
    bool hasPathSum(TreeNode* root, int targetSum) {
        
        if(root == NULL)
            return false;
        
        if(root->left != NULL){
            if(root->right != NULL){
                return traverse(root->left,root->val,targetSum) || 
                    traverse(root->right,root->val,targetSum);
            }
            return traverse(root->left,root->val,targetSum);
        }
        
        return root->right != NULL ? traverse(root->right,root->val,targetSum):root->val == targetSum;
    }
    bool traverse(TreeNode* root,int acc,int target){
        if(root == NULL)
            return acc == target;
        acc += root->val;
         if(root->left != NULL){
            if(root->right != NULL){
                return traverse(root->left,acc,target) || traverse(root->right,acc,target);
            }
            return traverse(root->left,acc,target);
        }
        
        return root->right != NULL ? traverse(root->right,acc,target):acc == target;
        
        
    }
};