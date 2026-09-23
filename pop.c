#include<stdio.h>
#include<stdlib.h>
#define SIZE 10
int stk[SIZE];
int sp = -1;
void main()
{
void push(int);
int pop(),opt,item;
void display();
do
{
printf("1.push \n2.pop\n3.display\n4.Exit \n");
printf("your option:");
scanf("%d",&opt);
switch(opt)
{
case 1: printf("Enter item:");
scanf("%d",&item);
push(item);
break;
case 2: item = pop();
printf("poped value = %d \n",item);
break;
case 3:printf("stack items are:");
display();
break;
case 4: exit(0);
}
} while (9);
}
void push(int x)
{
if(sp == SIZE -1)
{printf("stack is full");
return;
}
else
stk[++sp] = x;
return;
}
int pop()
{
if(sp ==-1)
{
printf("stack is empty");
exit(0);
}
return  stk [sp--];
}
void display()
{
int i,top;
top=sp;
for(i=0;i<=top;i++)
{
printf("%d\t",stk[i]);
}
printf("\n");
return;
}
