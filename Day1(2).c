//Add two numbers taking input from user.

#include<stdio.h>
int main()
{
	//int a=24,b=6;
	f a,b;
	int sum,sub,mul,div,rem;
	printf("Hello!Enter two numbers:");
	scanf("%d%d",&a,&b);
	printf("a=%d b=%d\n",a,b);
	sum=a+b;
	sub=a-b;
	mul=a*b;
	div=a/b;
	rem=a%b;
	printf("sum=%d,sub=%d,mul=%d,div=%d,rem=%d",sum,sub,mul,div,rem);
	return 0;
}