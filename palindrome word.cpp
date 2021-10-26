#include<stdio.h>
int main()
{
	int a;
	printf("enter a number:");
	scanf("%d",&a);
	int b,rev=0;
	while(a!=0)
	{
		b=a%10;
		rev=rev*10+b;
		a=a/10;
	}
	printf("%d\t%d",rev,a);
	if(rev==a)
		printf("given number is a palindrome");
	else
		printf("given number is not plaindrome");
	
}
