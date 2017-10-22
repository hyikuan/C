// 1. 计算并输出从键盘上输入的多个整数中所有正数的个数，直到输入0时停止。判断一个整数是否为正数要求编写函数positive ( int m)来完成。请编写main函数和positive函数。
#include<stdio.h>
#include<stdlib.h>
bool positive(int a)
{
	if (a > 0) return true;
	else return false;
}

int main(void)
{
	int num = 0, t = 1;
	while (t) {
		scanf_s("%d", &t);
		if (positive(t)) num++;
	}
	printf_s("The quantity of the whole number is: %d\n", num);

	system("pause");
	return 0;
}


// 2. 从键盘输入一个整数，判断其是否是质数。判断一个整数是否为质数要求编写函数isprime( int a)来完成。请编写main函数和isprime函数。
#include<stdio.h>
#include<stdlib.h>
bool isprime(int a)
{
	bool t = true;
	for (int i = 2; i < a; i++) 
		if (a%i == 0) {
			t = false;
			break;
		}
	return t;
}

int main(void)
{
	int a;
	scanf_s("%d", &a);
	if (isprime(a)) printf_s("This number is prime.");
	else printf_s("This number is not prime.");

	system("pause");
	return 0;
}


// 3. 定义函数，判断一个4位正整数是否是水仙花数。所谓四位“水仙花数”是指一个4位数，其各位数字的4次方和等于该数本身。例如，1634是一个四位水仙花数，因为1634=14+64+34+44。利用该函数找出所有4位的水仙花数。
#include<stdio.h>
#include<stdlib.h>
#include <math.h>
bool issxh(int a)
{
	int sum = 0;
	int t = 0, a1 = a;
	for (int i = 0; i < 4; i++) {
		t = a1 % 10;
		a1 = a1 / 10;
		sum += pow(t, 4);
	}
	if (sum == a) return true;
	else return false;
}

int main(void)
{
	for (int a = 1000; a <= 9999; a++) 
		if (issxh(a)) printf_s("%d\n",a);

	system("pause");
	return 0;
}
