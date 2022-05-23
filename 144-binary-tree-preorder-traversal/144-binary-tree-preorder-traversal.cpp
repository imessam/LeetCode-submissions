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
    vector<int> preorderTraversal(TreeNode* root) {
        
        vector<int> tree;
        
        
        if(root != NULL){
            
            tree.push_back(root->val);
            
            vector<int> leftTree;
            leftTree = preorderTraversal(root->left);
            tree.insert(tree.end(), leftTree.begin(), leftTree.end());
            
            vector<int> rightTree;
            rightTree = preorderTraversal(root->right);
            tree.insert(tree.end(), rightTree.begin(), rightTree.end());
            
        }
    
        return tree;
    }
};