//求出10至1000之内能同时被2、3、7整除的数，并输出。每行一个。


#include<stdio.h>

int main()
{
	for (int num = 42; num < 1000; num += 42)
		printf("%d\n", num);

	return 0;
}