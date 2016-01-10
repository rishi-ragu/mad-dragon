//Program to check whether the number is palindrome or not
#include<stdio.h>
void main()
{
int num,a,b,rev=0;
printf("Enter the number that has to be checked for palindrome: ");
scanf("%d",&num);
b=num;
while(num!=0)
{
a=num%10;    
rev=(10*rev)+a;
num/=10;
}
if(b==rev)
printf("The entered number is a palindrome.");
else
printf("The entered number is not a palindrome.");

}
