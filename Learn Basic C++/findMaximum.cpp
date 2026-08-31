//Deletion of a singly linked list from any specific position given by user.
#include<stdio.h>
#include<stdlib.h>

int main()
{
struct node
{
int data;
struct node *next;
};

struct node *head = 0, *newnode, *temp, *prev;
int choice = 1, pos, count = 0, i;

while(choice)
{
newnode = (struct node*) malloc(sizeof(struct node));
printf("Enter data : ");
scanf("%d", &newnode->data);
newnode->next = 0;

if(head == 0)
{

head = temp = newnode;
}
else
{
temp->next = newnode;
temp = newnode;
}

printf("Continue?(1/0): ");
scanf("%d", &choice);
}

printf("Singly linked list : ");
temp = head;
while(temp != 0)
{
printf("%d ", temp->data);
temp = temp->next;
}

temp = head;
while(temp != 0)
{
count++;
temp = temp->next;
}

if(head == 0)
{
printf("\nList is empty.\n");
return 0;
}

printf("\nEnter position : ");
scanf("%d", &pos);

if(pos <= 0 || pos > count)
{
printf("Invalid position.\n");
return 0;
}

temp = head;

if(pos == 1)
{
head = head->next;
free(temp);
printf("Node deleted from position 1.\n");
return 0;
}

for(i = 1; i < pos; i++)
{
prev = temp;
temp = temp->next;
}

prev->next = temp->next;
free(temp);

printf("List after deletion : ");
temp = head;
while(temp != 0)
{
printf("%d ", temp->data);
temp = temp->next;
}

return 0;
}