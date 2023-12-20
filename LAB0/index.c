#include<stdio.h>
void inde(int);
void main()
{
int n;
printf("enter the size of the array");
scanf("%d",&n);
inde(n);
}
void inde(int m)
{
int arr[10],key;int ind;
printf("enter the array elements");
for(int i=0;i<m;i++)
{
scanf("%d",&arr[i]);
}
printf("enter the number whose index needs to be found");
scanf("%d",&key);
for(int i=0;i<m;i++)
{
    if(arr[i]==key)
    {
      ind=i;  
    }
}
printf("the element is found at %d",ind+1);
}
