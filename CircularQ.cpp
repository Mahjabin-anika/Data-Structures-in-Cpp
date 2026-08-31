#include <iostream>
using namespace std;

#define size 5

int q[size];
int front = -1, rear = -1;

bool isfull()
{
    return ((front == 0 && rear == size - 1) ||
            (rear + 1) % size == front);
}

bool isempty()
{
    return (front == -1);
}

void enq(int value)
{
    if (isfull())
    {
        cout << "Queue overflow.\n";
    }
    else
    {
        if (front == -1)
        {
            front = rear = 0;
        }
        else
        {
            rear = (rear + 1) % size;
        }

        q[rear] = value;

        cout << "Inserted: " << value << endl;
    }
}

void deq()
{
    if (isempty())
    {
        cout << "Queue underflow.\n";
    }
    else
    {
        int removed = q[front];

        if (front == rear)
        {
            front = rear = -1;
        }
        else
        {
            front = (front + 1) % size;
        }

        cout << "Dequeued: " << removed << endl;
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

        if (front <= rear)
        {
            for (int i = front; i <= rear; i++)
            {
                cout << q[i] << " ";
            }
        }
        else
        {
            for (int i = front; i < size; i++)
            {
                cout << q[i] << " ";
            }

            for (int i = 0; i <= rear; i++)
            {
                cout << q[i] << " ";
            }
        }

        cout << endl;
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
        cout << "Front element: " << q[front] << endl;
    }
}

int main()
{
    int choice, value;

    while (true)
    {
        cout << "\n--- Circular Queue Menu ---\n";
        cout << "1. Enqueue\n";
        cout << "2. Dequeue\n";
        cout << "3. Peek\n";
        cout << "4. Display\n";
        cout << "5. Is Full\n";
        cout << "6. Is Empty\n";
        cout << "7. Exit\n";

        cout << "Enter choice: ";
        cin >> choice;

        switch (choice)
        {
            case 1:
                cout << "Enter value: ";
                cin >> value;
                enq(value);
                break;

            case 2:
                deq();
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