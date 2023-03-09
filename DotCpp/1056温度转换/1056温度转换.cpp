/*输入一个华氏温度，要求输出摄氏温度。
公式为:C=5/9*(F-32)
保留两位小数*/

#include<stdio.h>

int main()
{
	float C, F;
	scanf("%f", &F);

	C = (float)5 / 9 * (F - 32);
	printf("%.2f", C);

	return 0;
}