#include<stdio.h>
#include<conio.h>
int main()
{
	int first,second,*p,*q,*sum;
	printf("Enter the first number:");
	scanf("%d",&first);
	printf("Enter the second number:");
	scanf("%d",&second);
	p=&first;
	q=&second;
	*sum=*p + *q;
	printf("The sum of the entered number is =%d\n",sum);

}
