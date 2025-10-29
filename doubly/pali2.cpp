#include <iostream>

// create the nodes

struct Node {
    // you also want to create an int that holds the data
    int data;
    // you want to create a node pointer to next and prev ok
    Node* next;
    Node* prev;
    // dont forget to create a node where it takes the value
    Node(int val){
        data = val;
        // now u wanna initiate next and prev to nullptr
        Node* next = nullptr;
        Node* prev = nullptr;
    }

};

// Now create a doubly linked list ok

class doublylinkedlist{
    // ok so you want to create a constructer, to initiate a head and a tail POINTER in both public and private
    public:
    doublylinkedlist() {
        Node* head_ = nullptr;
        Node* tail_ = nullptr;
    }

    // lets create a append function ok

    // this append function allows you to add values at the end of the DLL
    void append(int val){
        // you first want to create a new node 
        Node* newNode = new Node(val);
        // check if the list is empty
        if (head_ == nullptr){
            head_ = newNode;
            tail_ = newNode;
        } else {
            // else if your list has values inside it, what you want to do:
            // 1. HAVE TAIL POINT TO YOUR NEXT NODE
            // 2. SET THAT POINTER (THE ONE TAIL IS NEXT POINTING TO) TO THE NEW NODE
            // 3. NOW WHAT? YOU NEED TO LINK THE NEW NODE TO THE OLD TAIL BECAUSE THATS THE WHOLE POINT OF A DLL.
            // 4. AFTER LINKING, NOW SET THE NEW NODE AS THE NEW TAIL OK?
            tail_->next = newNode;
            newNode->prev = tail_;
            tail_ = newNode;
        }
    }

    // Now lets create a function that allows the user to print their word forward

    void printForward() {
        // you need a temp variable, because you do not want to modify the original list
        Node* temp = head_;
        while (temp != nullptr) {
            std::cout << temp->data; // what this does is print the data of temp, not the memory address (temp)
        } 
    }

    // lets do a backward function, same thing but we start with tail ok

    void printBackward() {
        Node* temp = tail_;
        while (temp != nullptr) {
            //head also points to its prev, nullptr 
            std::cout << temp->data;
    }
}

    //now lets make the actual palidrome yea

    bool isPalindrome(){
        // think: how to compare with the print functions?
        // you want set left to head, and right to tail, then make an if so it prints until its not nullptr,
        // and if it does not cross the middle so when the left side is not equal to right->next 
        // (left crosses the middle once it reaches the next of right)
        Node* left = head_;
        Node* right = tail_;
        while (left != nullptr && right != nullptr && left != right->next) {
            //need to iterate and check if each value is equal to eachother
            // also needs to be a while so it checks for EVERY SINGLE INDEX 
            //make it immedianely return false if it's not equal to each other, easier that way
            if (left->data != right->data) { //remember to access the actual data not the memory address, so point it to data
                return false;
            }
            left = left->next; //must keep on iterating in the while loop to check every variable!
            right = right->next; // you know it fail if it doesn't pass the if statement above ok

        } return true; //keep it outside of the while loop, because if it is a palindrome
        //it will go outside the while loop and return true
    }

    private:
    Node* head_;
    Node* tail_;

};

main() {
    std::cout << "Enter a word: ";
    
}