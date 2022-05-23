
class Node{
    
  public:
    
    vector<Node*> children;
    string val ;
    bool isWord;
    
    Node(string val){
        this->val = val;
        isWord = false;
    }
    
    void addChild(Node* child){
        children.push_back(child);
    }
    
    Node* getChild(string val){
        Node* child = NULL;
        
        for(int i =0; i<children.size();i++){
            if(children[i]->val == val){
                child = children[i];
                break;
            }
        }
        return child;
    }
    
    bool hasChildren(){
        return children.size() > 0;
    }
    
    void printChildren(){
        cout<<"[";
        for(int i =0 ;i<children.size();i++){
            cout<<children[i]->val<<",";
        }
        cout<<"]";
    }
    
    
};

class Trie {
public:
    
    Node* root;
    Trie() {
        root = new Node("");
    }
    
    void insert(string word) {
        Node* current = root;
        Node* temp = NULL;
        string val ;
        for(int i = 0 ; i<word.length() ; i++){
            val = "";
            val += word[i];
            temp = current->getChild(val);
            if (temp != NULL){
                current = temp;
                continue;
            }
            temp = new Node(val);
            current->addChild(temp);
            current = temp;
            
        }
        current->isWord = true;
    }
    
    bool search(string word) {
        Node* current = root;
        Node* temp = NULL;
        bool isFound = true;
        string val = "";
        for(int i = 0 ; i<word.length() ; i++){
            val+=word[i];
            temp = current->getChild(val);
            if(temp == NULL){
                isFound = false;
                break;
            }
            current = temp;
            val = "";
        }
        isFound = isFound && current->isWord;
        return isFound;
    }
    
    bool startsWith(string prefix) {
        Node* current = root;
        Node* temp = NULL;
        bool isFound = true;
        string val = "";
        for(int i = 0 ; i < prefix.length() ; i++){
            val+=prefix[i];
            temp = current->getChild(val);
            if(temp == NULL){
                isFound = false;
                break;
            }
            current = temp;
            val = "";
        }
        return isFound;
    }
    
    void printTrie(){
        Node* curr = root;
        curr ->printChildren();
        cout<<endl;
        
    }
};

/**
 * Your Trie object will be instantiated and called as such:
 * Trie* obj = new Trie();
 * obj->insert(word);
 * bool param_2 = obj->search(word);
 * bool param_3 = obj->startsWith(prefix);
 */