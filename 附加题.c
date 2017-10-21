// 1. 判断一个5位数是不是回文数。如12321是回文数，其个位与万位数字相同，十位与千位数字相同
#include<stdio.h>
#include<stdlib.h>
// 鉴于只有五位数，无需使用conver函数，只需要在main中直接实现即可
// 注：似乎C语言编译器不支持函数/变量重载，但是在VC++的IDE下作用如何？
int main(void)
{
	int a[5], t; //此处数组大小为5的原因是数组尾部隐含了\0
	scanf_s("%d", &t);
	for (int i = 0; i <= 4; i++) {
		a[4 - i] = t % 10;
		t = t / 10;
	}
	bool p = true;
	for (int i = 0; i <= 4; i++)
		if (a[i] != a[4 - i]) p = false;
	if (p) printf_s("Yes");
	else printf_s("No");

	system("pause");
	return 0;
}


// 2. 输出2-1000之间的完数。所谓完数是这样的数，该数的各个因子之和等于该数本身。如：6=1+2+3，6是完数。
#include<stdio.h>
#include<stdlib.h>
// 鉴于程序实在简单，就不写为函数形式了
int main(void)
{
	int t = 0;
	for (int i = 2; i <= 1000; i++) {
		t = 0;
		for (int j = 1; j < i; j++) 
			if (i%j == 0) t += j;
		if (t == i) printf_s("%d\n", i);
	}

	system("pause");
	return 0;
}


// 3. 用1、2、3、4四个数字组成互不相同且无重复数字的三位数，求出有多少个这样的数。
#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	int s = 0;
	for (int i = 1; i <= 4; i++)
		for (int j = 1; j <= 4; j++)
			for (int k = 1; k <= 4; k++)
				if ((i != j) && (i != k) && (j != k)) s++;
	printf_s("%d", s);

	system("pause");
	return 0;
}


// 4. 用100文钱买 100只鸡，其中，公鸡 5文钱一只，母鸡 3文钱一只，小鸡 1文钱3只。问公鸡、母鸡、小鸡各多少只。
#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	int a, b, c;
	for (a = 0; a <= 100; a++)
		for (b = 0; b <= (100 - a); b++) {
			c = 100 - a - b;
			if ((5 * a + b * 3 + c / 3) == 100) printf("公鸡个数为：%d\n母鸡个数为：%d\n小鸡个数为：%d\n\n", a, b, c);
		}
	system("pause");
	return 0;
}
