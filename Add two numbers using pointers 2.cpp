#include <stdio.h>
int main()
{
	int first,second,*p,*q,sum;
	printf("Enter your first number: " );
	scanf("%d",&first);
	printf("Enter your second Number: ");
	scanf("%d",&second);
	p=&first;
	q=&second;
	sum=*p+*q;
	printf("sum of your two numbers: ",sum);
	
}

