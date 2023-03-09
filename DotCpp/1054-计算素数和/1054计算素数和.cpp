/*输入两个正整数m和n(m<n)，
求m到n之间(包括m和n)所有素数的和，
要求定义并调用函数isprime(x)来判断x是否为素数(素数是除1以外只能被自身整除的自然数)。*/

#include<stdio.h>

int isprime(int x);

int main()
{
	int m, n, sum;
	scanf("%d%d", &m, &n);

	if (m == 1)m++;
	//一定要注意m=1的情况！

	for (sum = 0; m <= n; m++)
		if (isprime(m))
			sum += m;

	printf("%d", sum);

	return 0;
}


int isprime(int x)
{
	for (int a = 2; a < x; a++)
		if (x % a == 0)
			return 0;

	return 1;
}

/*
注意：
1.在c语言里面是没有bool 类型的，
如果在函数里面直接返回bool类型会报错，
建议返回数字类型
c++可以返回bool 类型

2.注意m=1的情况！
*/