#include "lists.h"

int main() {
    List<int> List1;
    int answer;
    cout << "Enter the number of the action you want to perform:\n1.Checking the list for emptiness;\n2.Adding an item to the top of the list;\n3.Adding an item to the end of the list;\n4.Deleting the first node;\n5.Deleting the last node;\n6.Adding an element in front of a node with a given pointer;\n7.Deleting an element by pointer;\n8.Searching for an element by value;\n9.Deleting an element by value (the first one encountered);\n10.Displaying the entire list on the screen;\n11.Concatenation of two lists;\n12.Sorting the list;\n__________\n0.Stopping work;\n";
    cin >> answer;
    while (answer != 0) {
        if (answer == 1) {
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
            cout << "your chose " << answer << endl;
            cout << "ERROR!\n";
        }
        else if (answer == 7) {  //Deleting an element by pointer
            cout << "your chose " << answer << endl;
            cout << "ERROR!\n";
        }
        else if (answer == 8) {  //Searching for an element by value
            cout << "your chose " << answer << endl;
            cout << "ERROR!\n";
        }
        else if (answer == 9) {  //Deleting an element by value (the first one encountered)
            cout << "your chose " << answer << endl;
            cout << "ERROR!\n";
        }
        else if (answer == 10) {  //Displaying the entire list on the screen
            cout << "your chose " << answer << endl;
            cout << List1 << endl;
        }
        else if (answer == 11) {  //Concatenation of two lists
            cout << "your chose " << answer << endl;
            cout << "ERROR!\n";
        }
        else if (answer == 12) {  //Sorting the list
            cout << "your chose " << answer << endl;
            cout << "ERROR!\n";
        }
        cout << "Enter the number of the action you want to perform:\n1.Checking the list for emptiness;\n2.Adding an item to the top of the list;\n3.Adding an item to the end of the list;\n4.Deleting the first node;\n5.Deleting the last node;\n6.Adding an element in front of a node with a given pointer;\n7.Deleting an element by pointer;\n8.Searching for an element by value;\n9.Deleting an element by value (the first one encountered);\n10.Displaying the entire list on the screen;\n11.Concatenation of two lists;\n12.Sorting the list;\n__________\n0.Stopping work;\n";
        cin >> answer;
    }
    cout << "---You have finished working with the list---\n";
    cout << List1;
    return 0;
}