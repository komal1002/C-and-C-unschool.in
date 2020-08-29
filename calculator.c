/*Name:Komal
Subject:calculator using c coding*/
#include<stdio.h>
int main()
{
  int a,b;
  printf("Enter first number:");
  scanf("%d",&a);
  printf("Enter second number:");
  scanf("%d",&b);
  printf("Sum of %d and %d is %d",a,b,a+b);
  printf("\nDifference of %d and %d is %d",a,b,a-b);
  printf("\nProduct of %d and %d is %d",a,b,a*b);
  printf("\nOn dividing %d by %d quotient is %d",a,b,a/b);
  printf("\nOn dividing %d by %d remainder is %d",a,b,a%b);
  return 0;
}
