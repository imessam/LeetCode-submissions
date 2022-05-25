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
    bool findTarget(TreeNode* root, int k) {
        
        if(root == NULL)
            return false;
        queue<TreeNode*> q;
        
        int diff = 0;
        q.push(root);
        while(!q.empty()){               
                diff = k-q.front()->val;
                if(find(root,q.front(),diff))
                    return true;
                
                if(q.front()->left != NULL)
                    q.push(q.front()->left);
                if(q.front()->right != NULL)
                    q.push(q.front()->right);
                q.pop();
        }
        return false;
    }
    bool find(TreeNode* root,TreeNode* notSearch,int target){
        if(root == NULL)
            return false;
        if(root != notSearch && root->val == target)
            return true;
        if(target>root->val)
            return find(root->right,notSearch,target);
        return find(root->left,notSearch,target);
    }
    
};