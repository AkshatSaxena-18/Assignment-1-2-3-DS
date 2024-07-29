#include<stdio.h>
void main()
{
int  a[7]={11,5,45,26,12,34,19};
int i,n,x=26;
for(i=0;i<7;i++)
{
if(x==a[i])
{
printf("Element found at %d position",i+1);
}
}
}


