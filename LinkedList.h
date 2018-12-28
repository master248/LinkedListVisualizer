#ifndef LINKEDLIST_H
#define LINKEDLIST_H
struct Node {
    int value;
    Node* next;
    Node() : value(0), next(nullptr){}
    Node(int v) : value(v), next(nullptr) {}
};
class LinkedList {
private:
    Node* head;
    Node* tail;
public:
    void insert(Node* n) {
        if (head == nullptr) {
            head = n;
            tail = n;
        }
        else {
            tail->next = n;
            tail = n;
        }
    }
    void remove() {
        Node* temp = head;
        head = head->next;
        delete temp;
        temp = nullptr;
    }
    Node* getHead() {return head;}
    Node* getTail() {return tail;}
    LinkedList() : head(nullptr), tail(nullptr) {}
    LinkedList(Node* h) : head(h), tail(nullptr) {}
    ~LinkedList() {
        while (head != nullptr) {
            remove();
        }
    }
};
#endif
/*LinkedList ll;
    for (int i = 0; i < 10; i++) {
        Node* in = new Node(i);
        ll.insert(in);
    }
    Node* curr = ll.getHead();
    while (curr != nullptr) {
        std::cout << curr->value << std::endl;
        curr = curr->next;
    }

    for (int i = 0; i < 10; i++) {
        ll.remove();
    }
    */