//�Ӽ�����������20����������ͳ�����еĸ���������������������ƽ��ֵ��������λС��

#include<stdio.h>

int main()
{
	int m, n, sum;
	m = n = sum = 0;
	int nums[20] = { 0 };

	for (int i = 0; i < 20; i++)
	{ 
		scanf("%d", &nums[i]);
		if (nums[i] > 0)
		{
			sum += nums[i];
			m++;
		}
		else if (nums[i] < 0)
			n++;
	}

	printf("%d\n%.2f", n, (float)sum / m);

	return 0;
}