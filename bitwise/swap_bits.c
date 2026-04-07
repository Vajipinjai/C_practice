#include<stdio.h>
#define Swap_bits(num,x,y) if((num & (1<<x)) != (num & (1<<y))) \
							    num=(num^((1<<x) | 1<<y));

int main()
{
	int num=0x01;
	Swap_bits(num,0,3);
	printf("\n0x%x\n",num);
}
