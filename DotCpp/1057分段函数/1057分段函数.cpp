/*��һ���������£�дһ��������x�����yֵ��
Y={ X		X<1
	2X-1    1<=X<10
	3X-11    X>=10}
������λС��*/

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