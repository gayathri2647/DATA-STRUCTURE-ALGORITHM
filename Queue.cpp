#include <iostream>
using namespace std;

class queue
{
public:
    const int MAX_SIZE;
    int front, rear;
    int qu[5];

    queue() : MAX_SIZE(5)
    {
        front = -1;
        rear = -1;
    }

    void enqueue()
    {
        int value;

        if (rear == MAX_SIZE - 1)
        {
            cout << "\nQueue is full";
        }
        else
        {
            cout << "\nEnter the value for queue: ";
            cin >> value;

            if (front == -1)
            {
                front = 0;
            }

            rear = rear + 1;
            qu[rear] = value;
        }
    }

    void dequeue()
    {
        if (front == -1 || front > rear)
        {
            cout << "\nQueue is empty";
        }
        else
        {
            cout << "\nDeleted element is: " << qu[front];
            front = front + 1;

            if (front > rear)
            {
                front = -1;
                rear = -1;
            }
        }
    }

    void display()
    {
        int i;

        if (front == -1)
        {
            cout << "\nQueue is empty";
        }
        else
        {
            cout << "\nElements in queue are: ";

            for (i = front; i <= rear; i++)
            {
                cout << qu[i] << "\t";
            }
        }
    }
};

int main()
{
    queue q;

    q.enqueue();
    q.enqueue();

    q.dequeue();

    q.display();

    return 0;
}
