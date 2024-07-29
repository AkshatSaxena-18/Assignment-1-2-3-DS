#include<stdio.h>
void Quicksort(int a[],int lb,int Rb)
{
    int j;
    if(lb<Rb)
    {
        j=partition(a,lb,Rb);
        Quicksort(a,lb,j-1);
        Quicksort(a,j+1,Rb);
    }
}

int partition(int a[],int lb,int Rb)
{
    int R,L,temp,pivot;
    R=Rb;
    L=lb+1;
    pivot=a[lb];


    do
    {
        while((a[L]<pivot)&& (L<=Rb))
        {
            L++;
        }    
        while ((a[R]>pivot)&&(R>lb))
        {
            R--;
        }

        if(L<R)
        {
            temp=a[L];
            a[L]=a[R];
            a[R]=temp;
        }

        

    } while (L<R);
    a[lb]=a[R];
    a[R]=pivot;

 
   return R;   
}

void main()
{
    int a[20],i,n;
    printf("Enter the n: ");
    scanf("%d",&n);
    printf("Enter the Array elements");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    Quicksort(a,0,n-1);


    printf("Display the sorted Array: ");
    for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
}
