//posative negative 1//
#include<stdio.h>
#include<conio.h>

int main()
{
   int n;
   
   printf("enter any number to chake it is posative or negative=");
   scanf("%d",&n);
   
   if(n>1)
   {
     printf("%d is posative number",n);
   }
   else
   {
     printf("%d is negative number",n);
   }

   getch();
   return 0;
}