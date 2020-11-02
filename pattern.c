#include<stdio.h>
#include<stdlib.h>
int main()
{
   int r,c,s,n;
   system("color 04");
   printf("Enter the size >:");
   scanf("%d",&n);
   for(r=1;r<=n;r++)
   {
      for(s=1;s<=(n+1-r);s++)
      {
         printf(" ");
      }
      for(c=1;c<=r;c++)
      {
         if(r==1||r==2)
            printf(" ");
         else
      printf("* ");
      }
       for(s=1;s<=n-r;s++)
      {
         printf("  ");
      }
       for(c=1;c<=r;c++)
      {
         if(r==1||r==2)
            printf(" ");
         else
      printf("* ");
      }
     printf("\n");
   }
   for(r=1;r<=2*n;r++)
   {
      for(s=1;s<=r;s++)
      {
         printf(" ");
      }
      for(c=1;c<=2*n+1-r;c++)
      {
      printf("* ");
      }
      printf("\n");
   }

}




