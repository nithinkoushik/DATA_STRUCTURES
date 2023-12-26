#include<stdio.h>
void swap(int *a,int *b);
void main()
{
int m,n;
printf("enter the two numbers");
scanf("%d%d",&m,&n);
swap(&m,&n);
printf("AFTER SWAPPING:\n");
printf("value of m:%d and value of n:%d",m,n);
}
void swap(int *a,int *b)
{
int temp=*a;
*a=*b;
*b=temp;
}
