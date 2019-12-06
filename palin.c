#include <stdio.h>
int main()
{
   int n, revnum=0, remainder,temp;
   printf("Enter an integer :");
   scanf("%d", &n);

   temp=n;
   while(temp!=0)
   {
      remainder=temp%10;
      revnum=revnum*10+remainder;
      temp/=10;
   } 

   
   if(revnum==n) 
      printf("%d is a palindrome number",num);
   else
      printf("%d is not a palindrome number",num);
   return 0;
}
