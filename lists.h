#include<iostream>
using namespace std;

template<typename num_type>
struct Node{
    num_type data = 0;
    Node *next = nullptr;

    ~Node(){
        delete next;
    }
};

template<typename num_type>
class List{
    num_type size = 0;
    Node<num_type> *first = nullptr;

    public:
    
    
    void new_size(num_type siz_){
        size = siz_;
    }
    int get_size(){
        return size;
    }
    
    bool is_empty() const{
        if (first == nullptr){
            return true;
        }
        return false;
    }

    void push_back(num_type num);
    void push_ahead(num_type num);
    void pop_first();
    void pop_last();
    void adding_in_front_of_p(num_type num, const Node<num_type>* pointer);
    void pop_by_pointer( Node<num_type>* nodeptr);
    void pop_by_val(num_type num);
    Node<num_type>* search_by_val(num_type num);
    
    template<typename Type> friend ostream& operator<<(ostream& out, const List<Type>& conc);
    template<typename Type> friend istream& operator>>(istream& in, List<Type>& conc);
    // List operator+(List<num_type>& conc);
    
    ~List(){
            delete first;
        }
};

// template<typename num_type>
// List<num_type> List<num_type>::operator+(List<num_type>& conc){
//     Node<num_type> *it1 = conc.first;
//     Node<num_type> *it2 = first;
//     conc.new_size(size + conc.size);
//     while(it2->next != nullptr){
//         it2 = it2-> next;
//     }
//     cout << "-" << it2->data << "-";
//     cout << "fir" << endl;
//     while(it1->next != nullptr){
//         it2->next = it1;
//         it2 = it2->next;
//         it1 = it1->next;
//         cout << "-" << it2->data << "-";
//     }
//     it2->next = it1;
//     cout << "fin" << endl;
//     cout << conc;
//     return conc;
// }

template<typename num_type>
Node<num_type>* List<num_type>::search_by_val(num_type num){
    cout << "Your pointer is:\n";
    if (is_empty()){
        cout << "-No items to search-\n";
        return nullptr;
    }
    Node<num_type>* it = first;
    if (it->data == num){
        cout << first << endl;
        return first;
    }
    while(it->data != num and it->next != nullptr){
        it = it->next;
    }
    if (it->next == nullptr and it->data != num){
        cout << "we haven't this num, try again pls :(";
        return nullptr;
        
    } else{
        cout << it << endl;
        return it;
    }
    // delete it;
}

template<typename num_type>
void List<num_type>::pop_by_val(num_type num){
    if (is_empty()){
        cout << "-No items to delete-\n";
        return;
    }
    Node<num_type>* it = first;
    if (it->data == num){
        pop_first();
        return;
    }
    Node<num_type>* prev_it = first;
    while(it->data != num and it->next != nullptr){
        prev_it = it;
        it = it->next;
    }
    if (it->next == nullptr and it->data != num){
        cout << "we haven't this num, try again pls :(";
    } else{
        prev_it->next = it->next;
    }
    
    // delete it;
    size--;
}


template<typename num_type>
void List<num_type>::adding_in_front_of_p(num_type num, const Node<num_type>* pointer){
    if (is_empty()){
        cout << "\nWe recommend using the 1 or 2.\nList is empty\n";
    }
    Node<num_type> *it = first;
    Node<num_type> *prev_it = first;
    while (it != pointer){
        prev_it = it;
        it = it->next;
    }
    Node<num_type>* new_el = new Node<num_type>;
    new_el->data = num;
    new_el->next = it; //prev_it->next;
    prev_it->next = new_el;
}

template<typename num_type>
void List<num_type>::pop_by_pointer( Node<num_type>* nodep) {
        Node<num_type>* it = first;
        Node<num_type>* prev_it = first;
        if (is_empty() or first->next == nullptr or first == nodep) {
            return;
        }
        while (it->next != nodep) {
            prev_it = it;
            it = it->next;
        }
        prev_it = it;
        prev_it->next = nodep->next;
    }


template<typename num_type>
void List<num_type>::pop_last(){
        if (is_empty()){
            cout << "-No items to delete-\n";
            return;
        }
        if (first->next == nullptr) {
            delete first;
            first = nullptr;
            size --;
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
void List<num_type>::pop_first(){
        if (is_empty()){
            cout << "-No items to delete-\n";
            return;
        }
        if (first->next == nullptr) {
            delete first;
            first = nullptr;
            size --;
            return;
        }

        Node<num_type> *it = first;
        // while(it){cout << it-> data << ' '; it = it ->next;}
        // cout << endl;

        first = first->next;
        // delete it;
        size--;
    }

template<typename num_type>
void List<num_type>::push_ahead(num_type num){
        if (is_empty()){
            first = new Node<num_type>;
            first -> data = num;
            size ++;
            return;
        }
        Node<num_type> *it = new Node<num_type>;
        it->data = num;
        it->next = first;
        first = it;
        size ++;
    }


template<typename num_type>
void List<num_type>::push_back(num_type num){
        if (is_empty()){
            first = new Node<num_type>;
            first -> data = num;
            size ++;
            return;
        } else{
            Node<num_type> *it = new Node<num_type>;
            it = first;
            while (it->next != nullptr){
                it = it->next;
            }
            it->next = new Node<num_type>;
            it->next->data = num;
            // cout << num << ' ' << it->next->data << ' ' << it->data << endl;
            size ++;
        }
    }


template<typename num_type>
ostream& operator<<(ostream& out, const List<num_type>& conc) {
    Node<num_type> *it = new Node<num_type>;
    it = conc.first;
    out << "\nYour list:\n";
    if (conc.is_empty()){
        out << "-";
    }else{
        while (it->next != nullptr){
            out << it->data << " - ";
            it = it->next;
        }
        out << it->data;
    }

    out << "\nlength = " << conc.size << endl;
    return out;
}


template<typename num_type>
istream &operator>>(istream& in, List<num_type>& conc){
    // if (conc.is_empty()){} 
    // else{
    //     cout << "\nDeleting the list..\n";
    //     Node<num_type> *poi = conc.first;
    //     Node<num_type> *prev_poi = conc.first;
    //     while(poi->next != nullptr){
    //         prev_poi = poi;
    //         poi = poi->next;
    //         delete prev_poi;
    //     }
    //     conc.first = nullptr;
    // }
    conc.first = new Node<num_type>;
    Node<num_type> *it = conc.first;
    int num;
    in >> num;
    it->data = num;
    for (int i = 0; i < conc.size - 1; i++){
        int num;
        in >> num;
        it->next =  new Node<num_type>;
        it = it-> next;
        it->data = num;
    }
    return in;
}
