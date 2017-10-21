// 1. 从键盘输入一个实数，计算输出它的倒数
// 本程序仅保留三位小数
#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	double a, b = 1;
	scanf_s("%lf", &a);
	printf_s("%.3lf", b/a);
	
	system("pause");
	return 0;
}
