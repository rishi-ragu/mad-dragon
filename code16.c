//Program to display the prime numbers between the intervals
#include<stdio.h>
void main()
{
int n1,n2,i,b;
printf("Enter the min and max range of the interval: ");
scanf("%d%d",&n1,&n2);
i=n1+1;
b=i;
while((b>n1)&&(b<n2))
{
i=b-1;
while(i!=1)
{
if(b%i==0)
{
break;
}
i--;
}
if(i==1)
printf("%d\n",b);
b++;
}
}
