#include <iostream>
using namespace std;

class Stack
{
public:
    int MAX_SIZE;
    int top;
    int st[5];

    Stack()
    {
        MAX_SIZE = 5;
        top = -1;
    }

    void push()
    {
        int value;

        cout << "Enter the value for stack: ";
        cin >> value;

        if (top == MAX_SIZE - 1)
        {
            cout << "\nStack is overflow";
        }
        else
        {
            top = top + 1;
            st[top] = value;
        }
    }

    void pop()
    {
        if (top == -1)
        {
            cout << "\nStack is empty";
        }
        else
        {
            cout << "\nDeleted element is " << st[top];
            top = top - 1;
        }
    }

    void display()
    {
        int i;

        if (top == -1)
        {
            cout << "\nStack is empty";
        }
        else
        {
            cout << "\nElements in the stack are:\n";

            for (i = top; i >= 0; i--)
            {
                cout << st[i] << "\n";
            }
        }
    }

    void peek()
    {
        if (top == -1)
        {
            cout << "\nStack is empty";
        }
        else
        {
            cout << "\nTop element is " << st[top];
        }
    }
};

int main()
{
    Stack s;

    s.push();
    s.push();

    s.pop();

    s.display();

    s.peek();

    return 0;
}
