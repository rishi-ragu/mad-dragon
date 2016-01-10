//Program to check whether the number is a prime or not.
#include<stdio.h>
void main()
{
int num,b;
printf("Enter the number(it should not be 1 or 2): ");
scanf("%d",&num);
b=num;
num--;
while(num!=1)
{
if(b%(num)==0)
{
printf("The entered number is not a prime number.");
break;
}
num--;
}
if(num==1)
printf("The entered number is a prime number");
}
