#include<stdio.h>
void lin_search(int);
void main()
{
int n;
printf("enter the size of the array");
scanf("%d",&n);
lin_search(n);
}
void lin_search(int m)
{
int arr[10];
printf("enter the array elements");
for(int i=0;i<m;i++)
{
scanf("%d",&arr[i]);
}
int key,found=0;
printf("enter the element to be searched");
scanf("%d",&key);
for(int j=0;j<m;j++)
{
if(lin[j]==key)
{
printf("the element is found at %d",j+1);
found=1;
break;
}
}
if(found==0)
{
printf("not found");}
}
