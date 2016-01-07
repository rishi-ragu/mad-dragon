//Program to find the sume N numbers using for loop
#include<stdio.h>
void main()
{
int n,i,n1;
printf("Enter the range of numbers to add: ");
scanf("%d",&n);
n1=n;
for(i=n-1;i>0;i--)
n+=i;
printf("The sum of %d numbers is %d.",n1,n);
}
