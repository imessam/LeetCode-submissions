/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
    vector<vector<int>> levelOrder(Node* root) {
        
        vector<vector<int>> levels;
        queue<Node*> q;
        queue<Node*> l;
        
        if(root != NULL){
            vector<int> level;
            int s;
            q.push(root);
            l.push(root);
            while(!l.empty()){
                s = q.size();
                level = levelTrav(l);
                if(!level.empty()){
                    levels.push_back(level);
                }
                for(int j=0; j<s; j++){
                    for(int i =0; i<q.front()->children.size(); i++){
                        l.push(q.front()->children[i]);
                        if(!(l.back()->children.empty())){
                            q.push(l.back());
                        }
                    }
                    q.pop();
                }
            }
        }
        
        return levels;
    }
    
    vector<int> levelTrav(queue<Node*> &q){
            
            vector<int> level;
            
            while(!q.empty()){
                level.push_back(q.front()->val);
                q.pop();
            }
            return level;
        }
};