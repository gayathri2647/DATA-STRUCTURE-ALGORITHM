#include <iostream>
using namespace std;

struct node
{
    int data;
    node *link;
};

class single_linked_list
{
public:
    node *head;

    single_linked_list()
    {
        head = NULL;
    }

    void insert()
    {
        int value;
        cout << "\nEnter the value: ";
        cin >> value;

        node *newnode = new node;
        newnode->data = value;
        newnode->link = NULL;

        if (head == NULL)
        {
            head = newnode;
        }
        else
        {
            node *temp = head;
            while (temp->link != NULL)
            {
                temp = temp->link;
            }
            temp->link = newnode;
        }
    }

    void remove()
    {
        if (head == NULL)
        {
            cout << "\nList is empty";
        }
        else
        {
            node *temp = head;
            head = temp->link;
            delete temp;
        }
    }

    void search()
    {
        int search_value, present = 0;
        cout << "\nEnter the value to search: ";
        cin >> search_value;

        if (head == NULL)
        {
            cout << "\nList is empty";
            return;
        }

        node *temp = head;
        while (temp != NULL)
        {
            if (search_value == temp->data)
            {
                present = 1;
                cout << "\nElement found";
                break;
            }
            temp = temp->link;
        }

        if (present == 0)
        {
            cout << "\nElement not found";
        }
    }

    void display()
    {
        node *temp = head;
        cout << "\nElements in the Single list are: ";

        while (temp != NULL)
        {
            cout << temp->data << "\t";
            temp = temp->link;
        }
    }
};

int main()
{
    single_linked_list sll;

    sll.insert();
    sll.insert();
    sll.insert(); 

    sll.display();

    sll.remove();
    cout << "\nAfter deletion:";
    sll.display();

    sll.search();

    return 0;
}	
