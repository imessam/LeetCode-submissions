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
    vector<int> inorderTraversal(TreeNode* root) {
        
         vector<int> tree;
        
        
        if(root != NULL){
            
            
            vector<int> leftTree;
            leftTree = inorderTraversal(root->left);
            tree.insert(tree.end(), leftTree.begin(), leftTree.end());
            
            tree.push_back(root->val);            
            
            vector<int> rightTree;
            rightTree = inorderTraversal(root->right);
            tree.insert(tree.end(), rightTree.begin(), rightTree.end());
            
        }
    
        return tree;
        
    }
};