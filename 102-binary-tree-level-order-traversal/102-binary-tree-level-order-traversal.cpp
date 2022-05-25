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
        
        vector<vector<int>> levels;
        if(root != NULL){
            queue<TreeNode*> cq;
            queue<TreeNode*> nq;

            vector<int>level;
            cq.push(root);
            while(!cq.empty()){
                level = vector<int>();
                while(!cq.empty()){
                    if(cq.front() != NULL){
                        level.push_back(cq.front()->val);
                        nq.push(cq.front()->left);
                        nq.push(cq.front()->right);
                    }
                    cq.pop();
                }
                if(nq.empty()){
                    break;
                }
                levels.push_back(level);
                cq = nq;
                nq = queue<TreeNode*>(); 
            }
        }
        
        return levels;
        
    }
};