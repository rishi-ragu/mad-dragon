//Program to find the sum of n natural numbers
#include<stdio.h>
void main()
{
int n,n1;
printf("Enter the maximum range of natural numbers to sum up: ");
scanf("%d",&n);
n1=(n*(n+1))/2;
printf("The sum of %d natural numbers is %d.",n,n1);
}
