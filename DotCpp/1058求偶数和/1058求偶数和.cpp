//���Ƴ�������n��������n�Ӽ������룬n>0����������ǵ�ż���͡�

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