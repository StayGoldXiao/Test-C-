//编制程序，输入n个整数（n从键盘输入，n>0），输出它们的偶数和。

#include<stdio.h>

int main()
{
	int n, sum = 0;
	int nums[100] = { 0 };

	scanf("%d", &n);

	for (int i = 0; i < n; i++) 
	{
		scanf("%d", &nums[i]);
		if (nums[i] % 2 == 0)
			sum += nums[i];
	}

	printf("%d", sum);

	return 0;
}