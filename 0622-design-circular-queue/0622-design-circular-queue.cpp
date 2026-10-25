class MyCircularQueue {
public:
    int capacity;
    int fidx;
    int ridx;
    int *arr;
    int size;

    MyCircularQueue(int k) : capacity(k), fidx(0), ridx(-1), arr(new int[capacity]), size(0) {}
    
    bool enQueue(int val) {
        if(isFull()) return false;
        ridx = (ridx + 1) % capacity;
        arr[ridx] = val;
        size++;
        return true;
    }
    
    bool deQueue() {
        if(isEmpty()) return false;
        fidx = (fidx + 1) % capacity;
        size--;
        return true;
    }
    
    int Front() {
        if(isEmpty()) return -1;
        return arr[fidx];
    }
    
    int Rear() {
        if(isEmpty()) return -1;
        return arr[ridx];
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