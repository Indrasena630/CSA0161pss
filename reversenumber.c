#include<stdio.h>
int main() {
int reverse=0,digit,n;
printf("enter the number");
scanf("%d",&n);
while(n>0)
{
digit=n%10;
reverse=reverse*10+digit;
n=n/10;
}
printf("the reversed number=%d",reverse);
}
