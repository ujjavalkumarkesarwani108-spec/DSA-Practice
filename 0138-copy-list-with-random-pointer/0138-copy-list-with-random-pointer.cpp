// class Node {
// public:
//     int val;
//     Node* next;
//     Node* random;
// };
class Solution {
public:
    Node* copyRandomList(Node* head) {
        // step - 1  (create deep copy without random ptr)
        Node *dummy = new Node(108);
        Node *td = dummy;
        Node *temp = head;
        while(temp){
            Node *newNode = new Node(temp->val);
            td->next = newNode;
            td = td->next;
            temp = temp->next;
        }
        Node *duplicate = dummy->next;

        // step - 2 (join both lists alternatively)
        dummy = new Node(108);
        td = dummy;
        Node *a = head;
        Node *b = duplicate;

        while(b){
            td->next = a;
            a = a->next;
            td = td->next;

            td->next = b;
            b = b->next;
            td = td->next;
        }
        dummy = dummy->next;

        // step - 3 (assigning random pointers of duplicate)
        Node *t1 = dummy,*t2;
        while(t1){
            t2 = t1->next;
            if(t1->random) t2->random = t1->random->next;    // vvimp
            t1 = t1->next->next;
        }

        // step - 4 (removing alternate connections)
        Node *d1 = new Node(108);
        Node *d2 = new Node(108);
        t1 = d1;
        t2 = d2;
        Node *t = dummy;
        while(t){
            t1->next = t;
            t1 = t1->next;
            t = t->next;

            t2->next = t;
            t2 = t2->next;
            t = t->next;
        }
        t1->next = NULL;
        t2->next = NULL;
        d1 = d1->next;
        d2 = d2->next;

        return d2;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna