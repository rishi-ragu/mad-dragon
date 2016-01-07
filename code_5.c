//Program to find the greatest of three numbers
#include<stdio.h>
void main()
{
int n,o,p;
printf("Enter the three numbers: ");
scanf("%d%d%d",&n,&o,&p);
if((n>o)&&(n>p))
printf("%d is the greatest number.",n);
else if(o>p)
printf("%d is the greatest number.",o);
else
printf("%d is the greatest number.",p);
}
