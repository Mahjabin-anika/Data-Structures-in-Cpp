//implement singly linked list.
#include<stdio.h>
#include<stdlib.h>
struct node{
int data;
struct node *next;};
int main()
{
struct node *head=0,*newnode,*temp;
int choice=1;
while(choice)
{
newnode=(struct node*) malloc(sizeof(struct node));
printf("Enter data = ");
scanf("%d",& newnode ->data);
newnode ->next=0;
if(head==0)
{
head=temp=newnode;
}
else
{
temp ->next=newnode;
temp=newnode;
}
printf("If you want to continue press 1 for yes and 0 for no = ");
scanf("%d",&choice);
}
temp=head;
printf("linked list = ");
while(temp !=0)
{
printf("%d ", temp -> data);

temp=temp -> next;
}
return 0;
}