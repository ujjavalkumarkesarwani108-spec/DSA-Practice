class ProductOfNumbers {
public:
    vector<int> prefix;
    ProductOfNumbers() {
        prefix.push_back(1);
    }
    
    void add(int num) {
        int n = prefix.size();
        if(num){
            prefix.push_back(prefix[n-1]*num);
        }
        else{
            prefix.clear();
            prefix.push_back(1);
        }
    }
    
    int getProduct(int k) {
        int n = prefix.size();
        if(k>=n){
            return 0;
        }
        else{
            return prefix[n-1] / prefix[n-k-1];
        }
    }
};

/**
 * Your ProductOfNumbers object will be instantiated and called as such:
 * ProductOfNumbers* obj = new ProductOfNumbers();
 * obj->add(num);
 * int param_2 = obj->getProduct(k);
 */

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna