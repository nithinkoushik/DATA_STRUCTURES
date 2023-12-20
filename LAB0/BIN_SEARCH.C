#include<stdio.h>
void bin_search(int);
void main()
{
int n;
printf("enter the size of the array");
scanf("%d",&n);
bin_search(n);
}
void bin_search(int m)
{
int arr[10],key;
printf("enter the array elements");
for(int i=0;i<m;i++)
{
scanf("%d",&arr[i]);
}
printf("enter the element to find");
scanf("%d",&key);
int low=0;
int high=m-1;
int mid;
while(low<=high)
{
mid=(low+high)/2;
if(arr[mid]==key)
{
 printf("the element is found at %d",mid+1);   
 break;
}
else if(arr[mid]<key)
{
low=mid+1;    
}
else{
high=mid-1;
}
}
if(low>high)
{
    printf("element not found");
}
}
