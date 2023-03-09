/*有一个函数如下，写一程序，输入x，输出y值。
Y={ X		X<1
	2X-1    1<=X<10
	3X-11    X>=10}
保留两位小数*/

#include<stdio.h>

int main()
{
	double x, y;
	scanf("%lf", &x);
	if (x < 1)
		y = x;
	else if (x >= 10)
		y = x * 3 - 11;
	else
		y = 2 * x - 1;

	printf("%.2lf", y);

	return 0;
}