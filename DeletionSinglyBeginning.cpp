//Deletion of a singly linked list from the beginning.
#include<stdio.h>
#include<stdlib.h>
int main()
{
struct node
{
int data;
struct node *next;
};
struct node *head=0,*temp,*newnode;
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
printf("Continue?(1/0) : ");
scanf("%d",&choice);
}

printf("Singly linked list : ");
temp=head;
while(temp!=0)

{
printf("%d ",temp->data);
temp=temp->next;
}
printf("\nDeletion of a singly linked list from beginning : ");
if(head==0)
{
printf("List is empty.\n");
}
else
{
temp=head;
head=head->next;
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