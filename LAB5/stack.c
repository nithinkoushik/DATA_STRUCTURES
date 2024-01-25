#include<stdio.h>
#include<stdlib.h>
struct node
{
int data;
struct node* next;
};
struct node* head;
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
printf("NOT ABLE TO PUSH");
}
else{
if(head==NULL)
{
ptr->data=val;
ptr->next=NULL;
head=ptr;
}
else
{
ptr->data=val;
ptr->next=head;
head=ptr;
}

}

}
int pop()
{
int del;
struct node* ptr;
if(head==NULL)
{
printf("stack empty");
}
else
{
del=head->data;
ptr=head;
head=head->next;
free(ptr);

}
return del;
}
void display()
{

struct node* current;
current=head;
if(current==NULL)
printf("stack empty");
else{

while(current!=NULL)
{
printf("%d",current->data);
current=current->next;
}
}
}
