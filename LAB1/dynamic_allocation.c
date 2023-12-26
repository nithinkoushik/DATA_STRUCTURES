#include<stdio.h>
void main()
{
int *ptr,*ptr1;
int n,i,m;
printf("enter the number of elemnets in array\n");
scanf("%d",&n);
ptr=(int*)malloc(n*sizeof(int));
if(ptr==NULL)
{
printf("memory not allocated!");}

else{
printf("memory allocated successfully using malloc\n");
for(i=0;i<n;i++)
ptr[i]=i+1;
}
printf("the elemenst are:\n");
for(i=0;i<n;i++)
printf("%d",ptr[i]);
printf("\n");
ptr1=(int*)calloc(n,sizeof(int));
if(ptr1==NULL)
{
printf("memory not allocated!");}

else{
printf("memory allocated successfully using calloc\n");
for(i=0;i<n;i++)
ptr1[i]=i+1;
}
printf("the elemenst are:\n");
for(i=0;i<n;i++)
printf("%d",ptr1[i]);
printf("\n");
free(ptr1);
printf("memory created using malloc is deallocated\n");
printf("memory created using calloc is deallocated\n");
printf("enter the new size:\n");
scanf("%d",&m);
ptr=realloc(ptr,m*sizeof(int));
printf("memory reallocated successfully using realloc\n");

}
