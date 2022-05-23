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
    bool isSymmetric(TreeNode* root) {
        
        bool isSymm = true;  
        
        if(root != NULL){
            vector<vector<int>> levels;
            queue<TreeNode*> cq;
            queue<TreeNode*> nq;

            
            cq.push(root);
            while(!cq.empty()){
                vector<int>level;
                while(!cq.empty()){
                    if(cq.front() != NULL){
                        level.push_back(cq.front()->val);
                        nq.push(cq.front()->left);
                        nq.push(cq.front()->right);
                    }else{
                        level.push_back(-101);
                    }
                    cq.pop();
                }
                
                
                if((levels.size() !=0) && !isSym(level)){
                    
                    if(!nq.empty()){
                        isSymm = false;
                    }
                        break;
                }

                
                levels.push_back(level);
                cq = nq;
                nq = queue<TreeNode*>(); 
            }
        }
        
        
        return isSymm;
    }
    
    
    bool isSym(vector<int> vec){
        
        bool isSymm = false;
        int s = vec.size();
        
        
        if((s % 2) == 0){
            int mid = s/2;
            isSymm = true;
            for(int i =0; i < mid; i++){
                if(vec[i] != vec[(s-1)-i]){
                    isSymm = false;
                    break;
                }
            }
            cout<<endl;
        }
        
        
        return isSymm;
    }
    
};