#include<stdio.h>
int main()
{
	int a,b,temp;
	printf("enter the value of a ");
	scanf("%d",&a);
	printf("enter the value of b");
	scanf("%d",&b);
	temp=a;
	a=b;
	b=temp;
	printf("after swapping=%d",a);
	printf("after swapping=%d",b);
	return 0;
}
