//Program to display the odd numbers between any given interval
#include<stdio.h>
void main()
{
int n1,n2,i;
printf("Enter the min and max values of an interval: ");
scanf("%d%d",&n1,&n2);
i=n1+1;
printf("The odd numbers between the intervals are: \n");
while((i>n1)&&(i<n2))
{
if(i%2!=0)
printf("%d\n",i);
i++;
}
}
