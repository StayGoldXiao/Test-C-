/*����һ�������¶ȣ�Ҫ����������¶ȡ�
��ʽΪ:C=5/9*(F-32)
������λС��*/

#include<stdio.h>

int main()
{
	float C, F;
	scanf("%f", &F);

	C = (float)5 / 9 * (F - 32);
	printf("%.2f", C);

	return 0;
}