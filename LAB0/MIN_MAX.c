#include<stdio.h>
void min_max(int);
void main()
{
int n;
printf("enter the size of the array");
scanf("%d",&n);
min_max(n);
}
void min_max(int m)
{
int arr[10];
printf("enter the array elements");
for(int i=0;i<m;i++)
{
scanf("%d",&arr[i]);
}
int min=arr[0];
int max=arr[0];
for(int i=0;i<m;i++)
{
if(arr[i]<min)
{
min=arr[i];
}
}
for(int i=0;i<m;i++)
{
if(arr[i]>max)
{
max=arr[i];
}
}
printf("maximun number:%d",max);
printf("minimum number:%d",min);
}
