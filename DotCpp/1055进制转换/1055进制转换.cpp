//����һ��10������������Ȼ�����������Ӧ�İ˽�������

#include<stdio.h>
#include<math.h>

int main()
{
	int m, n, i;
	scanf("%d", &m);

	for (i = n = 0; m != 0; i++)
	{
		n += (m % 8) * (int)pow(10, i);
		m /= 8;
	}
	printf("%d", n);

	return 0;
}