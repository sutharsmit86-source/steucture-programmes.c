#include<stdio.h>
#include<string.h>
int main()  
{ 
   int str[100];
   printf("Enter a string: ");
   gets(str);
   strlwr(str);
   printf("lowercase converted string: %s\n", str);
   return 0;
}