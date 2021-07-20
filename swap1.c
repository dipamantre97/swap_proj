#include<stdio.h>
int main()
{
	int a=10 ,b=20,temp;
	printf("before swapping a=%d,b=%d",a,b);
	temp=a;
	a=b;
	b=temp;
	printf("after swapping a=%d,b=%d",a,b);
}

