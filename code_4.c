//Program to find out whether the entered character is an alphabet or not
#include<stdio.h>
void main()
{
char ch;
printf("Enter a character: ");
scanf("%c",&ch);
if((ch>64)&&(ch<91))
printf("The given character is an alphabet.");
else if((ch>96)&&(ch<123))
printf("The given character is an alphabet.");
else
printf("The given character is not an alphabet.");
}
