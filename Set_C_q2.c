#include<stdio.h>

int rebinarysearch(int a[],int top, int bottom,int key)
{
int mid;
if(top<=bottom)
{
mid=(top+bottom)/2;

if(a[mid]==key)
return mid;

else
	if(key<a[mid])
	
	return rebinarysearch(a,top,mid-1,key);
else
	return rebinarysearch(a,mid+1,bottom,key);
	}
	return -1;
	}	

void Bubblesort(int a[10],int n)
{
int i,temp,pass;
for(i=0;i<pass;i++)
{
for(pass=0;pass<n-i-1;pass++)
{
temp=a[pass];
a[pass]=a[pass+1];
a[pass+1]=temp;
}
}
}		
void main()
{
int a[10],i,n,key,pass,pos;
printf("How many elements: ");
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
Bubblesort(a,n);
printf("Enter the key element: ");
scanf("%d",&key);

pos=rebinarysearch(a,0,n-1,key);
if(pos==-1)
	
	printf("Element not found");
	
else
	
	printf("Element found");
}	


