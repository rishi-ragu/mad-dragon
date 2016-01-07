//Program to find the number of digits of an integer
#include<stdio.h>
void main()
{
int n,count=0;
printf("Enter the integer: ");
scanf("%d",&n);
while(n!=0)
{
n=n/10;
count++;
}
printf("The number of digits in the integer is %d.",count);
}
