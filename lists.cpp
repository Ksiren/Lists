#include "lists.h"

int main() {
    List<int> List1;
    int answer, val_num;
    Node<int> *val_pointer;
    cout << "Enter the number of the action you want to perform:\n101.Enter the list;\n1.Checking the list for emptiness;\n2.Adding an item to the top of the list;\n3.Adding an item to the end of the list;\n4.Deleting the first node;\n5.Deleting the last node;\n6.Adding an element in front of a node with a given pointer;\n7.Deleting an element by pointer;\n8.Searching for an element by value;\n9.Deleting an element by value (the first one encountered);\n10.Displaying the entire list on the screen;\n11.Concatenation of two lists;\n12.Sorting the list;\n__________\n0.Stopping work;\n";
    cin >> answer;
    while (answer != 0) {
        if (answer == 101){
            cout << "your chose " << answer << "\nEnter the length of list:\n";
            int length1;
            cin >> length1;
            List1.new_size(length1);
            cout << "\nEnter the list:\n";
            cin >> List1;
            cout << List1;
        } 
        else if (answer == 1) {
            cout << "your chose " << answer << endl;
            if (List1.is_empty()) {  //Checking the list for emptiness
                cout << "\n-The list is empty-\n";
            }
            else {
                cout << "\n+The list has elements+\n";
            }
        }
        else if (answer == 2) {  //Adding an item to the top of the list
            cout << "your chose " << answer << endl;
            int num;
            cout << "\nEnter the number:\n";
            cin >> num;
            List1.push_ahead(num);
            cout << List1 << endl;
            // cout << "ERROR!\n";

        }
        else if (answer == 3) {  //Adding an item to the end of the list
            cout << "your chose " << answer << endl;
            int num;
            cout << "\nEnter the number:\n";
            cin >> num;
            List1.push_back(num);
            cout << List1 << endl;
        }
        else if (answer == 4) {  //Deleting the first node
            cout << "your chose " << answer << endl;
            List1.pop_first();
            cout << List1 << endl;
        }
        else if (answer == 5) {  //Deleting the last node
            cout << "your chose " << answer << endl;
            List1.pop_last();
            cout << List1 << endl;
        }
        else if (answer == 6) {  //Adding an element in front of a node with a given pointer
            int num; 
            cout << "your chose " << answer << endl;
            cout << "your pointer is - " << val_pointer << "  (before the " << val_num << ")\n";
            cout << "\nEnter the number:\n";
            cin >> num;
            List1.adding_in_front_of_p(num, val_pointer);
            cout << List1 << endl;
        }
        else if (answer == 7) {  //Deleting an element by pointer
            cout << "your chose " << answer << endl;
            cout << "your pointer is - " << val_pointer << "  (the " << val_num << ")\n";
            List1.pop_by_pointer(val_pointer);
            cout << List1 << endl;
        }
        else if (answer == 8) {  //Searching for an element by value
            cout << "\nEnter the number:\n";
            cin >> val_num;
            val_pointer = List1.search_by_val(val_num);
        }
        else if (answer == 9) {  //Deleting an element by value 
            int num;
            cout << "\nEnter the number:\n";
            cin >> num;
            List1.pop_by_val(num);
            cout << List1 << endl;
        }
        else if (answer == 10) {  //Displaying the entire list on the screen
            cout << "your chose " << answer << endl;
            cout << List1 << endl;
        }
        else if (answer == 11) {  //Concatenation of two lists
            // List<int> List2;
            // cout << "your chose " << answer << "\nEnter the length of the second list:\n";
            // // int length2;
            // // cin >> length2;
            // // List2.new_size(length2);
            // // cout << "\nEnter the second list:\n";
            // // cin >> List2;
            // // List1 = List2 + List1;
            cout << List1;
        }
        else if (answer == 12) {  //Sorting the list
            cout << "your chose " << answer << endl;
            cout << "ERROR!\n";
        }
        cout << "\nEnter the number of the action you want to perform:\n1.Checking the list for emptiness;\n2.Adding an item to the top of the list;\n3.Adding an item to the end of the list;\n4.Deleting the first node;\n5.Deleting the last node;\n6.Adding an element in front of a node with a given pointer;\n7.Deleting an element by pointer;\n8.Searching for an element by value;\n9.Deleting an element by value (the first one encountered);\n10.Displaying the entire list on the screen;\n11.Concatenation of two lists;\n12.Sorting the list;\n__________\n0.Stopping work;\n";
        cin >> answer;
    }
    cout << "---You have finished working with the list---\n";
    cout << List1;
    return 0;
}
