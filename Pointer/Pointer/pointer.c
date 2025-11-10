#include <stdio.h>
#include <stdlib.h>
//值传递
//void fun(int parm)
//{
//	printf("fun: %d\n", parm);
//}
//指针传递:
int FindMax(const int *array,int count)
{
	int i;
	int max = array[0];
	/*for (i = 1; i < count; i++)
	{
		if (array[i] > max)
		{
			max = array[i];
		}
	}*/
	//使用了const不能修改array指向的内容
	//array[1] = 66;
	return max;
}
//通过指针返回多个值
void findmaxandcount(int* max, int* count, const int* array, int* length)
{
	int i;
	*max = array[0];
	*count = 1;
	for (i = 1; i < length; i++)
	{
		if (array[i] > *max)
		{
			*max = array[i];
			*count = 1;
		}
		else if (array[i] == *max)
		{
			(*count)++;
		}
	}
}
//返回数组的指针
int Time[3] = { 10,20,30 };
int* GetTime(void)
{
	return Time;
}
int main()
{
	/*int a;
	int* p;
	printf("%d\n", sizeof(a));
	printf("%d\n", sizeof(p));*/

	/*int* a;
	a = malloc(3 * 4);
	*a = 0x33;
	*(a + 1) = 0x34;
	*(a + 2) = 0x35;
	printf("%x %x %x\n", *a, *(a + 1), *(a + 2));
	free(a);*/

	//int a = 0x66;
	//fun(a);

	int a[5] = { 10,22,38,42,42 }; 
	int Max;
	int count;
	//Max = FindMax(a,5);
	/*printf("Max=%d\n", Max);
	printf("a[1]=%d\n", a[1]);*/
	findmaxandcount(&Max, &count, a, 5);
	printf("Max=%d,count=%d\n", Max, count);
	int* pt;
	pt = GetTime();
	printf("%d %d %d\n", pt[0], pt[1], pt[2]);
	FILE *f = fopen("D:\\test.txt","w");
	printf("f=%p\n", f);
	fputc('A',f);
	fclose(f);

	return 0;

}

