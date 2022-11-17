#include<iostream>
using namespace std;

template<typename num_type>
struct Node {
    num_type data = 0;
    Node* next = nullptr;

    ~Node() {
        delete next;
    }
};

template<typename num_type>
class List {
public:
    num_type size = 0;
    Node<num_type>* first = nullptr;

public:


    bool is_empty() const {
        if (first == nullptr) {
            return true;
        }
        return false;
    }

    void push_back(num_type num);
    void push_ahead(num_type num);
    void pop_first();
    void pop_last();

    ~List() {
        delete first;
    }
};

template<typename num_type>
ostream& operator<<(ostream& out, const List<num_type>& conc);

template<typename num_type>
void List<num_type>::pop_last() {
    if (is_empty()) {
        cout << "-No items to delete-\n";
        return;
    }
    if (first->next == nullptr) {
        delete first;
        first = nullptr;
        size--;
        return;
    }
    Node<num_type>* nod = first;
    Node<num_type>* prev_nod = first;
    while (nod->next != nullptr) {
        prev_nod = nod;
        nod = nod->next;
    }
    delete nod;
    prev_nod->next = nullptr;
    size--;
}

template<typename num_type>
void List<num_type>::pop_first() {
    if (is_empty()) {
        cout << "-No items to delete-\n";
        return;
    }
    if (first->next == nullptr) {
        delete first;
        first = nullptr;
        size--;
        return;
    }
    Node<num_type>* it = new Node<num_type>;
    it = first;
    first->data = it->next->data;
    first->next = it->next->next;
    // delete it;
    size--;
}