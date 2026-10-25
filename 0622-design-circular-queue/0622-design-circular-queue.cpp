class MyCircularQueue {
public:
    int capacity;
    int fidx;
    int ridx;
    int *arr;
    int size;

    MyCircularQueue(int k) : capacity(k), fidx(0), ridx(0), arr(new int[capacity]), size(0) {}
    
    bool enQueue(int val) {
        if(isFull()) return false;
        arr[ridx++] = val;
        size++;
        if(ridx == capacity) ridx = 0;
        return true;
    }
    
    bool deQueue() {
        if(isEmpty()) return false;
        fidx++;
        if(fidx == capacity) fidx = 0;
        size--;
        return true;
    }
    
    int Front() {
        if(isEmpty()) return -1;
        return arr[fidx];
    }
    
    int Rear() {
        if(isEmpty()) return -1;
        if(ridx == 0) return arr[capacity - 1]; 
        return arr[ridx-1];
    }
    
    bool isEmpty() {
        return size == 0;
    }
    
    bool isFull() {
        return size == capacity;
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

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna