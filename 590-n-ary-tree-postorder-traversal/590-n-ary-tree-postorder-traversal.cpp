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
    vector<int> postorder(Node* root) {
        vector<int> n;
        
        if(root != NULL){
            
            vector<int> ret;
            for(int i =0; i<root->children.size(); i++){
                ret = postorder(root->children[i]);
                n.insert(n.end(),ret.begin(),ret.end());
            }
            n.push_back(root->val);
        }
        return n;
    }
};