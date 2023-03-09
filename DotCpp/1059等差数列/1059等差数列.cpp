//sum=2+5+8+11+14+…，输入正整数n，求sum的前n项和。

#include<stdio.h>

int main()
{
	int n;
	scanf("%d", &n);
	printf("%d", (3 * n + 1) * n / 2);


	return 0;
}