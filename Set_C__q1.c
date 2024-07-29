#include<stdio.h>

void merge(int a[],int low,int mid,int high)
{
    int i,j,k,b[20];
    i=low;
    j=mid+1;
    k=0;


    while((i<=mid)&& (j<=high))
    {
        if(a[i]<=a[j])
        {
            b[k++]=a[i++];
        }
        else
            b[k++]=a[j++];
    }

    while(i<=mid)
    {
        b[k++]=a[i++];

        while (j<=high)
        {
            b[k++]=a[j++];
        }

        for(i=low,k=0;i<=high;i++,k++)
        {
            a[i]=b[k];
        }
        
    }
}

void mergesort(int a[],int low,int high)
{
    int mid;
    if(low<high)
    {
        mid=(low+high)/2;
        mergesort(a,low,mid);
        mergesort(a,mid+1,high);
        merge(a,low,mid,high);
    }
}

void main()
{
    int a[]={2,1,15,11,65,45,63};
    int n=7;
    mergesort(a,0,n-1);

    for(int i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
}

