#include<stdio.h>
#define CLEAR_BIT(num,x) num&=~(1<<x);

int main()
{
	int x=7;
	CLEAR_BIT(x,2);
	printf("%d",x);
}
