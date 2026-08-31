#include <iostream>
using namespace std;
#define SIZE 3
int stack[SIZE];
int top = -1;
void push(int value) {
if (top == SIZE - 1)
cout << "Stack Overflow!" << endl;
else {
stack[++top] = value;
cout << "Pushed: " << value << endl;
}
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
cout << "Current Stack: ";
for (int i = top; i >= 0; i--)
cout << stack[i] << " ";
cout << endl;
}
}
int main() {
// Given question instructions
push(51);
pop();
pop();
push(55);
push(25);
peek();
cout << (isFull() ? "Stack is Full!" : "Stack is not Full!") << endl;
pop();
display();
}