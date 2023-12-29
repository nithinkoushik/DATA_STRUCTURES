#include<stdio.h>
#define max_size 100
int   queue[max_size];
int front=-1;int rear=-1;
void enqueue(int);
int dequeue();
void display();
void main()
{
  int choice;
printf("1.TO INSERT ENQUEUE\n2.TO DEQUEUE\n3.TO DISPLAY");
scanf("%d",&choice);
switch(choice)
{
case 1:int ele;
       printf("enter the element to insert\n");
      scanf("%d",&ele);
      void enqueue(ele); 
break;
case 2: int rem=dequeue();
return rem;
break;
case 3:void display();
break;
default:printf("enter correct input");
}
void enqueue(int m)
{
if(rear==(max_size  

  
