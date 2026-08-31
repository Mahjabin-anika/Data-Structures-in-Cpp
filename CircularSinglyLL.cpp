//Circular Singly linked list.
#include <stdio.h>
#include <stdlib.h>
struct node {
int data;
struct node *next;
};
struct node *head = 0;
void print() {
if (head == 0) {
printf("List is empty.\n");
return;
}

struct node *temp = head;
do {
printf("%d ", temp->data);
temp = temp->next;
} while (temp != head);
printf("\n");
}
int main() {
struct node *temp, *newnode;
int input = 1;
while (input) {
newnode = (struct node*) malloc(sizeof(struct node));
printf("Enter data: ");
scanf("%d", &newnode->data);
if (head == 0) {
head = temp = newnode;
newnode->next = head;
} else {
temp->next = newnode;
newnode->next = head;
temp = newnode;
}
printf("Press (0/1) to continue: ");
scanf("%d", &input);
}
printf("Circular Linked List: ");
print();
return 0;
}