#include<stdio.h>
unsigned int factorial(unsigned int n)
{
if(n==0)
return 1;
return n*factorial(n-1);
}
int main()
{
int num;
printf("enter the number values:");
scanf("%d",&num);
printf("factorial of %d and %d",num,factorial(num));
return 0;
}
