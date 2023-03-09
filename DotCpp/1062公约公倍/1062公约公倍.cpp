//输入两个正整数m和n，求其最大公约数和最小公倍数。

#include<stdio.h>

int main()
{
	int m, n, num1, num2;
	scanf("%d%d", &m, &n);
	
	for (int a = num1 = 1; a < m && a < n; a++)
		if (m % a == 0 && n % a == 0)
			num1 = a;

	for (int a = num2 = m * n; a > m && a > n; a--)
		if (a % m == 0 && a % n == 0)
			num2 = a;
		
	printf("%d\n%d", num1, num2);

	return 0;
}