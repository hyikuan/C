// 1. 统计全班某门功课的平均成绩，找出最高、最低分。（一维数组）
// 使用while循环输入成绩，遇到-1结束输入
#include<stdio.h>
#include<stdlib.h>
const int MAX = 10000;
int main(void)
{
	int a[MAX];
	int max, min, mean;
	double total = 0;
	int grade = 0, n = 0;
	while (grade != -1) {
		n++;
		scanf_s("%d", &grade);
		a[n] = grade;
	}
	min = a[1];
	max = a[1];
	for (int i = 1; i < n; i++) {
		total += a[i];
		if (min > a[i]) min = a[i];
		if (max < a[i]) max = a[i];
	}
	printf_s("The max score is %d\n", max);
	printf_s("The min score is %d\n", min);
	printf_s("The mean score is %.2lf\n", total / (n - 1));

	system("pause");
	return 0;
}


// 2. 有一个3×4的矩阵，求该矩阵中具有最大值的元素，输出其值并指出该元素所在的行号和列号。（二维数组）
#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	int x = 0, y = 0;
	double a[10][10] = { 0 };

	for (int i = 0; i < 3; i++)
		for (int j = 0; j < 4; j++)
			scanf_s("%lf", &a[i][j]);

	double max = a[0][0];
	for (int i = 0; i < 3; i++)
		for (int j = 0; j < 4; j++)
			if (max < a[i][j]) {
				x = i;
				y = j;
				max = a[i][j];
			}
	printf_s("The max element in the matrix is: %.2lf\n", max);
	printf_s("The max element locat at a[%d][%d]", x+1, y+1);

	system("pause");
	return 0;
}
