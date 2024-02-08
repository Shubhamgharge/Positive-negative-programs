//posative negative using ternary 4//
#include<stdio.h>
#include<conio.h>

int main()
{
   int n;
    
   printf("\nenter any number to chake it is posative or negative=");
   scanf("%d",&n);
   
   (n==0) ? printf("n%d is nutral",n) :( (n>0) ? printf("\n%d is posative",n) : printf("\n%d is negative",n));

   getch();
   return 0;
}