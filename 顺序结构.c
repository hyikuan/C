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


// 2. 输入一个3位正整数，求出该数各个位上的数字，并以间隔2个空格的形式逆序输出数字。如，输入123，则输出3  2  1。
#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	int a, a1, a2, a3;
	scanf_s("%d", &a);
	a1 = a / 10 / 10;
	a2 = a / 10 % 10;
	a3 = a % 10;
	printf_s("%d %d %d", a1, a2, a3);
	
	system("pause");
	return 0;
}


// 3. 设有整型变量a=33、字符型变量b等于字母B、单精度实型变量c=211.5、双精度实型变量d=211.5，编程输出变量a、b、c、d的值和a与b的和、差、积和商。
// 注：此处输出的商：0.000000，在做除法的时候进行了类型转换 a / b = 0。
#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	int a = 33;
	char b = 'B';
	float c = 211.5;
	double d = 211.5;
	//printf_s("a: %d\nb: %c\nc: %f\nd: %lf\n", a, b, c, d);
	//printf_s("和：%d\n差：%d\n积：%d\n商：%lf\n", a + b, a - b, a*b, a / b);

	system("pause");
	return 0;
}
