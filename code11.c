//Program to find the power of a number
#include<stdio.h>
void main()
{
int n,p,i,power=1;
printf("Enter the number to which power has to be calculated and the power: ");
scanf("%d%d",&n,&p);
for(i=0;i<p;i++)
{
power*=n;
}
printf("The power of %d times %d is %d.",n,p,power);
}
