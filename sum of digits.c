#include<stdio.h>
int main() {
int sum=0,digit,n;
printf("enter the number");
scanf("%d",&n);
while(n>0)
{
digit=n%10;
sum=sum+digit;
n=n/10;
}
printf("the sum of digits=%d",sum);
}
