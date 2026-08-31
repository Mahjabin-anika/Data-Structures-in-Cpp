//write all functions of stack in one file.[user input ]

#include <iostream>
using namespace std;
#define SIZE 5
int stack[SIZE];
int top = -1;
void push(int value) {
if (top == SIZE - 1)
cout << "Stack Overflow!" << endl;
else
stack[++top] = value;
}
void pop() {
if (top == -1)
cout << "Stack Underflow!" << endl;
else
cout << "Popped: " << stack[top--] << endl;
}
void peek() {
if (top == -1)
cout << "Stack is empty!" << endl;
else
cout << "Top element: " << stack[top] << endl;
}
bool isFull() {
return top == SIZE - 1;
}
bool isEmpty() {
return top == -1;

}
void display() {
if (isEmpty())
cout << "Stack is empty!" << endl;
else {
cout << "Stack elements: ";
for (int i = top; i >= 0; i--)
cout << stack[i] << " ";
cout << endl;
}
}
int main() {
int choice, value;
while (true) {
cout << "\n1.Push 2.Pop 3.Peek 4.Display 5.isFull 6.isEmpty 7.Exit\n";
cout << "Enter your choice: ";
cin >> choice;
switch (choice) {
case 1:
cout << "Enter value to push: ";
cin >> value;
push(value);
break;
case 2:
pop();
break;
case 3:
peek();
break;
case 4:
display();
break;
case 5:
cout << (isFull() ? "Stack is Full!" : "Stack is not Full!") << endl;

break;
case 6:
cout << (isEmpty() ? "Stack is Empty!" : "Stack is not Empty!") << endl;
break;
case 7:
return 0;
default:
cout << "Invalid choice!" << endl;
}
}
}