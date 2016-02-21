#include<stdio.h>
#include "text_process.h"
int main()
{
char ch ;
printf("enter a character\n");
scanf("%c",&ch);
 if (check_vowel(ch) ==1)
 printf("vowel\n");
 else 
 printf("no!\n");
 }
