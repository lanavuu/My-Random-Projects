#include <iostream>

struct Node{
    int data;
    Node* next;
    Node* prev;

    Node(int val) {
        data = val;
        Node* next = nullptr;
        Node* prev = nullptr;

    }
};

class DoublyLinkedList {
    public:

    DoublyLinkedList() {
        Node* head = nullptr;
        Node* tail = nullptr;
    }

    void append(int val) {
        Node* newNode = new Node(val);

        if (head == nullptr) {
            head = newNode;
            tail = newNode;
        } else {
            tail->next = newNode; //tail pointer's next is the added value (newnode)
            newNode->prev = tail; // new node needs to connect to the previous value, which holds the title tail
            tail = newNode; // new node needs to own title tail
        }
    }

    void printForward() {
        Node* temp = head;
        while (temp != nullptr) {
            std::cout << temp->data; // pointing to data accesses the actual value, unlike just TEMP will give u the memory address
            temp = temp->next; // now u need to iterate till its nullptr, so set temp to the next memory addess in the value
        }
    }
    
    void printBackward(){
        Node* temp = tail;
        while (temp != nullptr) {
            std::cout << temp->data;
            temp = temp->prev;
        }
    }

    bool palindrome(){
        Node* left = head;
        Node* right = tail;
        while (left != nullptr && right != nullptr && left != right->next) { // check until it doesnt reach the end of the list,
            // and also check until the left n right pointers dont cross UNTIL LEFT REACHES THE RIGHT OF NEXT (RIGHT->NEXT)
            if (left->data != right->data) { // allow ptr to access the element to check if not equal to each other
                return false;
            }
            left = left->next; //iterate 
            right = right->prev; // The job of this while loop, is to check every single pair and see if false
            // otherwise after all iteratiom, it will return true (all pairs have passed the if statement)
        }
        return true;
    }


    private:
    Node* head;
    Node* tail;
};

main() {
    DoublyLinkedList palindrome;
    std::cout << palindrome.palindrome();

}