class MyHashSet {
public:
    
    int arr [1000000];
    MyHashSet() {
    }
    
    void add(int key) {
        
        
        
        if (!contains(key)){
            int idx = hash(key);
            arr[idx] = key;
        }
        
    }
    
    void remove(int key) {
        
        
        if(contains(key)){
            int idx = hash(key);
            arr[idx] = -1;
        }
    }
    
    bool contains(int key) {
        
        int idx = hash(key);
        
        return arr[idx] == key;
        
    }
    
    int hash(int key){
        return key%1000000;
    }
};

/**
 * Your MyHashSet object will be instantiated and called as such:
 * MyHashSet* obj = new MyHashSet();
 * obj->add(key);
 * obj->remove(key);
 * bool param_3 = obj->contains(key);
 */