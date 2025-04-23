#include <stdio.h>
int stpointer =0;
int x;
int arr[5];
push(element)
{
   if(stpointers<4)
{
stpointer++
arr[stpointer]=[element];
}
else
{
printf("stack overflow");
}
}
int pop()
{
if(stpointer==-1)
{
x=arr[stpointer];
stpointer--
}
else
{
printf("stack underflow");
}
}

void main()
{
push(10)
push(20)
push(30)
push(40)
push(50)
printf("%d element is added....\n");
printf("%d element is added....\n");
printf("%d element is added....\n");
printf("%d element is added....\n");
printf("%d element is added....\n");
}
