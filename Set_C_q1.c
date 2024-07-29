#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void main()
{
int STD[10];
char cities[20];
FILE *fp="cities.txt";
fp=fopen("cities.txt","r");

if(fp==NULL)
{
printf("Not exist");
exit (0);
}

while(fscanf(fp,"%d",&STD,&

