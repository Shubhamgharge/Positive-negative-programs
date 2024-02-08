//posative negative 3//
#include<stdio.h>
#include<conio.h>

int main()
{
   int n;
   
   printf("\menter any number to chake it is posative or negative=");
   scanf("%d",&n);
   
   if(n==0)
   {
     printf("\n%d is nutral",n);
   }
   
   else if(n>1)
   {
     printf("\n%d is posative number",n);
   }
   else
   {
     printf("\n%d is negative number",n);
   }

   getch();
   return 0;
}