#include <iostream>
using namespace std;

struct node {
    int data;
    node *link;
};

class single_linked_list {
public:
    node *head;

    single_linked_list() {
        head = NULL;
    }

    void insert() {
        int value;
        cout << "\nEnter value: ";
        cin >> value;

        node *newnode = new node;
        newnode->data = value;
        newnode->link = NULL;

        if (head == NULL)
            head = newnode;
        else {
            node *temp = head;
            while (temp->link != NULL)
                temp = temp->link;
            temp->link = newnode;
        }
    }

    void remove() {
        if (head == NULL)
            cout << "\nList is empty";
        else {
            node *temp = head;
            head = head->link;
            delete temp;
        }
    }

    void search() {
        int value, present = 0;
        cout << "\nEnter value to search: ";
        cin >> value;

        node *temp = head;

        while (temp != NULL) {
            if (temp->data == value) {
                present = 1;
                cout << "\nElement found";
                break;
            }
            temp = temp->link;
        }

        if (present == 0)
            cout << "\nElement not found";
    }

    void display() {
        node *temp = head;
        cout << "\nElements: ";

        while (temp != NULL) {
            cout << temp->data << "\t";
            temp = temp->link;
        }
    }
};

int main() {
    single_linked_list sll;

    sll.insert();
    sll.insert();
    sll.insert();

    sll.display();

    sll.remove();
    sll.display();

    sll.search();

    return 0;
}
