//posativ negative 2//
#include<stdio.h>
#include<conio.h>

int main()
{
   int n;
   up: 
   printf("\nenter any number to chake it is posative or negative=");
   scanf("%d",&n);
   
   if(n==0)
   {
     printf("\n%d is nutral",n);
     goto up;
   }
   
   else if(n>1)
   {
     printf("\n%d is posative number",n);
   }
   else
   {
     printf("\n%d is negative number",n);
   }
   
   printf("\n\n thanks!!");

   getch();
   return 0;
}