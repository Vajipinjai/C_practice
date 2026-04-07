#include<stdio.h>
#define SET_BIT(num,x) num|=(1<<x);
int main()
{
	int n=7;
	SET_BIT(n,3);
	printf("\n%d",n);
}
