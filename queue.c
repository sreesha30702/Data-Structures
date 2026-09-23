#include<stdio.h>
#include <stdlib.h>
#define SIZE 10
int Q[SIZE];
int front = 0,rear=0;
void main()
{
static void enqueue(int );
int dequeue(),opt,item;
void display();
do
{
printf("1.Enqueue \n2.Dequeue \n3.Exit \n");
printf("your option:");
scanf("%d",&opt);
switch(opt)
{
case 1: printf("enter item:");
        scanf("%d",&item);
        enqueue(item);
        break;
case 2: item = dequeue();
        printf("poped value = %d",item);
        break;
case3: exit(0);
}
} while(9);
static void enqueue(int x)
{
int temp;
temp = (rear+1)%SIZE;
if(temp == front)
printf("Queue is full");
else
rear = temp;
Q[rear]=item;
}
return;
}
int dequeue()
{
if(front == rear)
printf("Queue is empty");
else
{
front=(front+1)%SIZE;
return Q[front];
}
}
void display()
{
int i;
if(front == rear)
 printf("no.of elements:");
 else
 {
 i=(front+1)&SIZE;
 {
  printf("%d \t",Q[i]);
  i =(i+1)%SIZE;
  }
  while(i!=front);
  }
  return;
  }
  
