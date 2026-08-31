//Show a queue .[ queue size is 5]
#include <iostream>
using namespace std;

#define size 5

int q[size];
int front = -1, rear = -1;

bool isfull()
{
    return (rear == size - 1);
}

bool isempty()
{
    return (front == -1 || front > rear);
}

void enqueue(int value)
{
    if (isfull())
    {
        cout << "Queue overflow.\n";
    }
    else
    {
        if (front == -1)
            front = 0;

        q[++rear] = value;

        cout << "Enqueued element: " << value << endl;
    }
}

void dequeue()
{
    if (isempty())
    {
        cout << "Queue underflow.\n";
    }
    else
    {
        cout << "Dequeued element: " << q[front] << endl;
        front++;
    }
}

void peek()
{
    if (isempty())
    {
        cout << "Queue is empty.\n";
    }
    else
    {
        cout << "Queue front element: " << q[front] << endl;
    }
}

void display()
{
    if (isempty())
    {
        cout << "Queue is empty.\n";
    }
    else
    {
        cout << "Queue: ";

        for (int i = front; i <= rear; i++)
        {
            cout << q[i] << " ";
        }

        cout << endl;
    }
}

int main()
{
    int choice, value;

    while (true)
    {
        cout << "\n--- Queue Menu ---\n";
        cout << "1. Enqueue\n";
        cout << "2. Dequeue\n";
        cout << "3. Peek\n";
        cout << "4. Display\n";
        cout << "5. Is Full\n";
        cout << "6. Is Empty\n";
        cout << "7. Exit\n";

        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
            case 1:
                cout << "Enter value to enqueue: ";
                cin >> value;
                enqueue(value);
                break;

            case 2:
                dequeue();
                break;

            case 3:
                peek();
                break;

            case 4:
                display();
                break;

            case 5:
                cout << (isfull() ?
                    "Queue is full.\n" :
                    "Queue is not full.\n");
                break;

            case 6:
                cout << (isempty() ?
                    "Queue is empty.\n" :
                    "Queue is not empty.\n");
                break;

            case 7:
                cout << "Exiting program.\n";
                return 0;

            default:
                cout << "Invalid choice.\n";
        }
    }
}