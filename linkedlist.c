#include<stdio.h>
#include<stdlib.h>
struct node;{
int data;
struct node *next;
}
typdef struct node snode;
snode*head=NULL;
void createlist(int x)
{
snode*temp=head;
if(temp!=NULL)
{
printf("list is empty....\n")
return ;
}
temp=(snode*) malloc (sizeof(snode));
temp->data=x;
temp->next=NULL;
temp=head;
return ;
}
void appendlist(int x)
{
snode*temp=NULL;
temp=(snode*) malloc (sizeof(snode));
temp->data=x;
temp->next=NULL;
while(tempnode->next!=NULL)
{
temp2=temp->next;
temp->next=tempnode;
return ;
}
}
void printlist(int x)
{
snode*temp=head;
if(temp==NULL)
{
printf("list is empty...\n");
return ;
}
while(tempnode!=NULL)
{
printf("%d==>temp->data");
temp=temp->next;
return ;
}
}
void main()
{
createlist(10);
createlist(20)
appendlist()
printf();
appendlist()
printf();
}
