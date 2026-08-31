//Insertion of a doubly linked list at any given position by user.
#include <stdio.h>
#include <stdlib.h>
struct node {
int data;
struct node *prev;
struct node *next;
};
struct node *head = 0, *temp, *newnode;
void print() {
temp = head;
printf("\nDoubly Linked List: ");
while (temp != 0) {
printf("%d ", temp->data);
temp = temp->next;
}
printf("\n");
}
void insertAtPosition(int pos, int value) {
int i;
newnode = (struct node*)malloc(sizeof(struct node));
newnode->data = value;
newnode->prev = 0;
newnode->next = 0;
if (pos == 1) {
newnode->next = head;
if (head != 0) {
head->prev = newnode;
}
head = newnode;
return;

}
temp = head;
for (i = 1; i < pos - 1 && temp != 0; i++) {
temp = temp->next;
}
if (temp == 0) {
printf("Invalid Position!\n");
free(newnode);
return;
}
newnode->next = temp->next;
newnode->prev = temp;
if (temp->next != 0) {
temp->next->prev = newnode;
}
temp->next = newnode;
}
int main() {
int input = 1, value, pos;
while (input) {
newnode = (struct node*)malloc(sizeof(struct node));
printf("Enter data: ");
scanf("%d", &newnode->data);
newnode->prev = 0;
newnode->next = 0;
if (head == 0) {
head = temp = newnode;
} else {
temp->next = newnode;
newnode->prev = temp;
temp = newnode;
}
printf("Continue adding initial nodes? (1/0): ");

scanf("%d", &input);
}
print();
printf("\nEnter value to insert: ");
scanf("%d", &value);
printf("Enter position to insert: ");
scanf("%d", &pos);
insertAtPosition(pos, value);
print();
return 0;
}