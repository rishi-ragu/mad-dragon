//Program to find whether a given character is a vowel or consonant
#include<stdio.h>
void main()
{
char ch;
printf("Enter a character: ");
scanf("%c",&ch);
if((ch=='a')||(ch=='A')||(ch=='e')||(ch=='E')||(ch=='i')||(ch=='I')||(ch=='o')||(ch=='O')||(ch=='u')||(ch=='U'))
printf("The given character is a vowel.");
else
printf("The given character is a consonant.");
}
