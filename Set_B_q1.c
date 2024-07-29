#include<stdio.h>
void main()
{
int  a[10],i,n,key;
printf("Enter the number of elements do you want: ");
scanf("%d",&n);
printf("Enter the array elements: ");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}

printf("Enter the key value: ");
scanf("%d",&key);

for(i=0;i<n;i++)
{
if(key==a[i])
{
printf("Element found at %d position\n",i+1);
}
}
}

