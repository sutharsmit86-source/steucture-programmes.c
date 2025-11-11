#include<stdio.h>
#include<string.h>
int main()
{  
   int str[100];
   printf("Enter a string: ");
   gets(str);
   strupr(str);
   printf("converted into upr case  string: %s\n", str);
   return 0;
}