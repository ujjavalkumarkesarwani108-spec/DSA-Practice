struct Node{
    int val;
    Node *prev;
    Node *next;

    Node(int val) : val(val), prev(nullptr), next(nullptr) {}
};
class MyCircularDeque {
public:
    int size;
    int capacity;
    Node *head;
    Node *tail;

    MyCircularDeque(int k) : size(0), capacity(k), head(nullptr), tail(nullptr) {}
    
    bool insertFront(int val) {
        if(isFull()) return false;
        Node *newNode = new Node(val);
        if(isEmpty()){
            head = tail = newNode;
        }
        else{
            newNode->next = head;
            head->prev = newNode;
            head = newNode;
        }
        size++;
        return true;
    }
    
    bool insertLast(int val) {
        if(isFull()) return false;
        Node *newNode = new Node(val);
        if(isEmpty()){
            head = tail = newNode;
        }
        else{
            newNode->prev = tail;
            tail->next = newNode;
            tail = newNode;
        }
        size++;
        return true;
    }
    
    bool deleteFront() {
        if(isEmpty()) return false;
        Node *temp = head;
        head = head->next;

        if(head != nullptr){
            head->prev = nullptr;
        }
        else{
            tail = nullptr;
        }

        delete temp;
        size--;
        return true;
    }
    
    bool deleteLast() {
        if(isEmpty()) return false;
        Node *temp = tail;
        tail = tail->prev;

        if(tail != nullptr){
            tail->next = nullptr;
        }
        else{
            head = nullptr;
        }

        delete temp;
        size--;
        return true;
    }
    
    int getFront() {
        if(isEmpty()) return -1;
        return head->val;
    }
    
    int getRear() {
        if(isEmpty()) return -1;
        return tail->val;
    }
    
    bool isEmpty() {
        return size == 0;
    }
    
    bool isFull() {
        return size == capacity;
    }
};

/**
 * Your MyCircularDeque object will be instantiated and called as such:
 * MyCircularDeque* obj = new MyCircularDeque(k);
 * bool param_1 = obj->insertFront(value);
 * bool param_2 = obj->insertLast(value);
 * bool param_3 = obj->deleteFront();
 * bool param_4 = obj->deleteLast();
 * int param_5 = obj->getFront();
 * int param_6 = obj->getRear();
 * bool param_7 = obj->isEmpty();
 * bool param_8 = obj->isFull();
 */

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna