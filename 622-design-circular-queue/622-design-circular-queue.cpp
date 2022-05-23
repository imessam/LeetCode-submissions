class MyCircularQueue {
public:
    int rear,front,length = 0,size;
    vector<int> queue;
    
    MyCircularQueue(int k) {
        size = k;
    }
    
    bool enQueue(int value) {
        
        bool isSucc = false;
        
        if(isEmpty()){
            rear = 0;
            front = 0;
            length = 1;
            queue.push_back(value);
            isSucc = true;
        }
        else if(!isFull()){
            queue.push_back(value);
            rear++;
            isSucc =  true;
            length++;
        }
        //printQueue();
        return isSucc;
    }
    
    bool deQueue() {
        
        bool isSucc = false;
        
        if(!isEmpty()){
            queue.erase(queue.begin()+front);
            rear--;
            length--; 
            isSucc = true;
        }
        //printQueue();
        return isSucc;
    }
    
    int Front() {
        if(!isEmpty()){
            return queue[front];
        }
        return -1;
    }
    
    int Rear() {
        if(!isEmpty()){
            return queue[rear];
        }
        return -1;
    }
    
    bool isEmpty() {
        return length == 0;
    }
    
    bool isFull() {
        return length == size;
    }
    
    void printQueue(){
        cout<<"[";
        for(int i = 0; i<queue.size();i++){
            cout<<queue[i]<<",";
        }
        cout<<"]"<<endl;
    }
};

/**
 * Your MyCircularQueue object will be instantiated and called as such:
 * MyCircularQueue* obj = new MyCircularQueue(k);
 * bool param_1 = obj->enQueue(value);
 * bool param_2 = obj->deQueue();
 * int param_3 = obj->Front();
 * int param_4 = obj->Rear();
 * bool param_5 = obj->isEmpty();
 * bool param_6 = obj->isFull();
 */