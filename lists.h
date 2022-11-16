#include<iostream>
using namespace std;

struct Node{
    int data = 0;
    Node *next = nullptr;
    
    ~Node(){
        delete next;
    }
};

class List{
    public:
    int size = 0;
    Node *first = nullptr;
    
    public:
    
    
    bool is_empty() const{
        if (first == nullptr){
            return true;
        } 
        return false;
    }
    
    void push_back(int num){
        if (is_empty()){
            first = new Node;
            first -> data = num;
            size ++;
            return;
        } else{
            Node *it = first;
            while (it->next != nullptr){
                it = it->next;
            }
            it->next = new Node;
            it->next->data = num;
            size ++;
        }
    }
    
    friend ostream& operator<<(ostream&, const List&);
    
    ~List(){
            delete first;
        }
};

ostream& operator<<(ostream& out, const List& conc) {
    Node *it = conc.first;
    out << "Your list:\n";
    while (it->next != nullptr){
        out << it->data << " - ";
        it = it->next;
    }
    out << it->data; 
    delete it;
    out << "\nlength = " << conc.size << endl;
    return out;
}