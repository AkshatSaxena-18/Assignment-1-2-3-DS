#include<stdio.h>

int binarysearch(int a[],int n,int key)
{
int top,mid,bottom;
top=0;
bottom=n-1;
while(top<=bottom)
{
mid=(top+bottom)/2;
if(a[mid]==key)
{

return mid;
}
else
{
if(key<a[mid])
{
	bottom=mid-1;
}

else
		top=mid+1;
		return -1;
}
}
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

pos=binarysearch(a,n,key);
if(pos==-1)
	
	printf("Element not found");
	
else
	
	printf("Element found");
}	


