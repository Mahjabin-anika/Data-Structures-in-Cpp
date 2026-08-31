//Deletion of a singly linked list from the end.
#include<stdio.h>
#include<stdlib.h>
int main()
{
struct node
{
int data;
struct node *next;
};
struct node *head=0,*newnode,*temp;
int choice=1;
while(choice)
{
newnode=(struct node*) malloc(sizeof(struct node));
printf("Enter data : ");
scanf("%d",&newnode->data);
newnode->next=0;
if(head==0)
{
head=temp=newnode;
}
else
{
temp->next=newnode;

temp=newnode;
}
printf("(1/0)? : ");
scanf("%d",&choice);
}

printf("Singly linked list : ");
temp=head;
while(temp!=0)
{
printf("%d ",temp->data);
temp=temp->next;
}

printf("\nDeletion of a singly linked list from end : ");
if(head==0)
{
printf("List is empty.\n");
}
else if(head->next==0)
{
free(head);
head=0;
}
else
{

temp=head;
struct node *prev;
while(temp->next !=0)
{
prev=temp;
temp=temp->next;
}
prev->next=0;
free(temp);
}

temp=head;
while(temp!=0)
{
printf("%d ",temp->data);
temp=temp->next;
}
return 0;
}