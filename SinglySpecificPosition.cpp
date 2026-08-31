//Insertion of a singly linked list at any specific position.
#include<stdio.h>
#include<stdlib.h>
int main()
{
struct node
{
int data;
struct node * next;
};
struct node *head=0,*newnode,*temp;
int choice=1,count=0,pos;
while(choice)
{
newnode=(struct node*) malloc (sizeof (struct node));
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
printf("(1/0)? " );
scanf("%d",&choice);
}
printf("Singly linked list : ");
temp=head;
while(temp!=0)
{

printf("%d ",temp->data);
temp=temp->next;
}
temp=head;
while(temp!=0)
{
temp=temp->next;
count++;
}
printf("\nEnter position : ");
scanf("%d",&pos);
if(pos<1 || pos>count+1)
{
printf("Invalid position.\n");
}
else
{
newnode=(struct node*) malloc (sizeof (struct node));
printf("Enter data : ");
scanf("%d",&newnode->data);
if(pos==1)
{
newnode->next=head;
head=newnode;
}
else
{
temp=head;
int i=1;
while(i<pos-1)
{
temp= temp->next;
i++;
}
newnode->next=temp->next;
temp->next=newnode;

}
printf("After insertion : ");
temp=head;
while(temp!=0)
{
printf("%d ",temp->data);
temp=temp->next;
}
}
return 0;
}