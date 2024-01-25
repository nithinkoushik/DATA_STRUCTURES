#include<stdio.h>
#include<stdlib.h>
struct node
{
int data;
struct node* next;
};
struct node* front;struct node* rear;
void push(int val);
int pop();
void display();
void main()
{
int choice;
while(1)
{
printf("1.TO insert\n2.TO DELETE\n3.to display\n");
scanf("%d",&choice);
switch(choice)
{
case 1:{
        int val;
        printf("enter element to insert");
        scanf("%d",&val);
        push(val);
        break;
       }
case 2:{
        int del;
        del=pop();
        printf("the element deleted:%d",del);
        break;
       }
case 3: {
         display();
         break;
        }
default:printf("enter correct choice");
        break;
}
}
}
void push(int val)
{
    struct node* ptr=(struct node*)malloc(sizeof(struct node));
    if(ptr==NULL)
    {
        printf("cant insert");
    }
    else
    {
        ptr->data=val;
        if(front==NULL)
        {
            front=ptr;
            rear=ptr;

            front->next=NULL;
            rear->next=NULL;
        }
        else
        {
            rear->next=ptr;
            rear=ptr;
            rear->next=NULL;
        }

    }


}
int pop()
{
    int del;
    struct node* ptr;
    if(front==NULL)
    {
        printf("cant delete");
    }

    else
    {
        del=front->data;
        ptr=front;
        front=front->next;
        free(ptr);
        return del;
    }

}
void display()
{
    struct node* current;
    current=front;
    if(current==NULL)
        printf("queue is empty");
    else
    {
         while(current!=NULL)
    {
        printf("%d",current->data);
        current=current->next;
    }
    }


}
