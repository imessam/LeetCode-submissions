class Node{
  
public:
    
    Node* prev;
    Node* next;
    int val;
        
    Node(Node* prev, int val){
        this->prev = prev;
        this->next = NULL;
        this->val = val;
    }
    
    
    
};


class MyLinkedList {
public:
    
    Node* head;
    Node* tail;
    int length;
    
    MyLinkedList() {
        head = NULL;
        tail = NULL;
        length = 0;
    }
    
    int get(int index) {
        
        int temp = 0;
        
        if(head == NULL){
            return -1;
        }
        
        if(index == 0){
            return head->val;
        }else if(index > 0 && index < length ){
            Node* curr = head;
            while(temp != index){
                curr = curr->next;
                temp++;
            }
            return curr->val;
        }else{
            return -1;
        }
        
    }
    
    void addAtHead(int val) {
        
        Node* newHead = new Node(NULL,val);
        
        if(head != NULL){
            head->prev=newHead;
            newHead->next=head;
        }else{
            tail = newHead;
        }
        head = newHead;
        length++;    
    }
    
    void addAtTail(int val) {
        
        if(head == NULL){
            addAtHead(val);
            return;
        }
        Node* newTail = new Node(NULL,val);

        newTail->prev=tail;
        tail->next=newTail;
        tail = newTail;
        length++;
        
    }
    
    void addAtIndex(int index, int val) {
        
        
        if(index == 0){
            addAtHead(val);
            return;
        }else if (index == length){
            addAtTail(val);
            return;
        }else if (index > 0 && index < length){
            Node* newNode = new Node(NULL,val);
            Node* curr = head;
            int temp = 0;
            
            while((temp+1) != index){
                curr = curr->next;
                temp++;
            }
            newNode->prev=curr;
            newNode->next=curr->next;
            curr->next->prev=newNode;
            curr->next=newNode;
            
                
        }else{
            return;
        }
        length++;
                
    }
    
    void deleteAtIndex(int index) {
        
        if(index >=0 && index < length){
        
            Node* curr = head;
            int temp = 0;
            
            if(index == 0 && head != NULL){
                head = head->next;
                if(head != NULL){
                    head->prev=NULL;
                }
            }else if (index==(length-1)){
                tail = tail->prev;
                tail->next=NULL;
            }else{

                while((temp+1) != index){
                    curr = curr->next;
                    temp++;
                }       
                curr->next->next->prev=curr;
                curr->next=curr->next->next;
                
            }
            
            length--;
        }
    }
    
};

/**
 * Your MyLinkedList object will be instantiated and called as such:
 * MyLinkedList* obj = new MyLinkedList();
 * int param_1 = obj->get(index);
 * obj->addAtHead(val);
 * obj->addAtTail(val);
 * obj->addAtIndex(index,val);
 * obj->deleteAtIndex(index);
 */