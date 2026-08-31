//Insertion of a singly linked list at the beginning.
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
newnode = (struct node*) malloc(sizeof(struct node));
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
printf("(0/1)? : ");
scanf("%d",&choice);
}
printf("Inserting newnode at the beginning : ");
newnode = (struct node*) malloc(sizeof(struct node));
printf("\nEnter data : ");
scanf("%d",&newnode->data);

newnode->next=head;
head=newnode;
printf("Linked list : ");
temp=head;
while(temp!=0)
{
printf("%d -> ",temp->data);
temp=temp->next;
}
printf("Null");
return 0;
}