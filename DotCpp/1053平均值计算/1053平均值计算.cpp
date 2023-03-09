//输入10个整数，求它们的平均值，并输出大于平均值的数据的个数。

#include<stdio.h>

int main()
{
	int nums[10] = { 0 };
	int a, average, sum1, sum2;
	for (a = 0, sum1 = 0; a < 10; a++)
	{
		scanf("%d", &nums[a]);
		sum1 += nums[a];
	}
	average = sum1 / 10;

	a = 0;

	for (sum2 = 0; a < 10; a++)
		if (nums[a] > average)
			sum2++;
	
	printf("%d", sum2);

	return 0;
}