/*��������������m��n(m<n)��
��m��n֮��(����m��n)���������ĺͣ�
Ҫ���岢���ú���isprime(x)���ж�x�Ƿ�Ϊ����(�����ǳ�1����ֻ�ܱ�������������Ȼ��)��*/

#include<stdio.h>

int isprime(int x);

int main()
{
	int m, n, sum;
	scanf("%d%d", &m, &n);

	if (m == 1)m++;
	//һ��Ҫע��m=1�������

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
ע�⣺
1.��c����������û��bool ���͵ģ�
����ں�������ֱ�ӷ���bool���ͻᱨ��
���鷵����������
c++���Է���bool ����

2.ע��m=1�������
*/