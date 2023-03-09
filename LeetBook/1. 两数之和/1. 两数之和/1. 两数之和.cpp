/*给定一个整数数组 nums 和一个整数目标值 target，
请你在该数组中找出 和为目标值 target  的那 两个 整数，并返回它们的数组下标。

你可以假设每种输入只会对应一个答案。但是，数组中同一个元素在答案里不能重复出现。

你可以按任意顺序返回答案。*/

#include<stdio.h>
#include<stdlib.h>

int* twoSum(int* nums, int numsSize, int target, int* returnSize);

int main() {
	int numsSize;
	int nums[100];
	int target;
	int returnSize[100];

	printf("numsSize = ");
	scanf("%d", &numsSize);
	
	for (int a = 0; a < numsSize; a++){
		printf("nums[%d] = ", a);
		scanf("%d", &nums[a]);
	}
	printf("target = ");
	scanf("%d", &target);
	twoSum(nums, numsSize, target, returnSize);

	return 0;
}

//下列为函数：
int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
	for (int i = 0; i < numsSize; ++i) {
		for (int j = i + 1; j < numsSize; ++j) {
			if (nums[i] + nums[j] == target) {
				int* factor;
				factor = (int*)malloc(sizeof(int) * 2);
				factor[0] = i, factor[1] = j;
				printf("[%d,%d]", i, j);
				*returnSize = 2;
				return factor;
			}
		}
	}
	*returnSize = 0;
	return NULL;
}


/*
错误分析：
1.直接使用int factor[]构造数组，未使用int* factor函数和malloc函数构造
原因：因为在函数中设置的是局部变量数组，当退出该函数，该变量数组也会随之销毁。
（不申请空间的情况下函数内建立的数组是局部变量，无法带回主函数）
C 语言不允许返回一个完整的数组作为函数的参数。
但是，可以通过指定不带索引的数组名来返回一个指向数组的指针。
如果您想要从函数返回一个一维数组，必须声明一个返回指针的函数
另外，C 不支持在函数外返回局部变量的地址，除非定义局部变量为 static 变量。
2.缺少参数int* returnSize；
*/