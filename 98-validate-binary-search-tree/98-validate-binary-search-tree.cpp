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
    bool isValidBST(TreeNode* root) {
        
        bool isValid = true;
        
        if(root != NULL){
                
                TreeNode* left = root->left;
                TreeNode* right = root->right;
            
                    if(left != NULL){
                        if(!(  traverseMax(left) < root->val  && isValidBST(left))){
                            return false;
                        }
                    }
                    if(right != NULL){
                        if(!( traverseMin(right) > root->val  && isValidBST(right))){
                            return false;
                        }
                    }
                }
        
        return isValid;
    }
    
    int traverseMax(TreeNode* root){
        
        int max = root->val,l=0,r=0;
        
        if(root->left != NULL){
            l = traverseMax(root->left);
            max = max>l?max:l;
        }
        if(root->right != NULL){
            r = traverseMax(root->right);
            max = max>r?max:r;
        }
        
        return max;
    }
    int traverseMin(TreeNode* root){
        
        int min = root->val,l=0,r=0;
        
        if(root->left != NULL){
            l = traverseMin(root->left);
            min = min<l?min:l;
        }
        if(root->right != NULL){
            r = traverseMin(root->right);
            min = min<r?min:r;
        }
        
        return min;
    }
};