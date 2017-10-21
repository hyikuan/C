// 1. 任意输入N个整数，统计其中奇数和偶数的个数
#include<stdio.h>
#include<stdlib.h>
int main(void)
{

	int n, temp;
	int even = 0, odd = 0;// temp is the variable to record every input number.
	printf("Please enter the quantity of the numbers you want to input: ");
	scanf("%d", &n);
	printf("%d, %d\n", odd, even);
	for (int i = 0; i < n; i++) {
		scanf("%d", &temp);
		if (temp % 2 == 0) even++;
		else odd++;
	}
	printf("The number of the odd numbers is %d.\nThe number of the even numbers is %d.", odd, even);

	system("pause");
	return 0;
}


// 2. 任意输入一串字符，以“？”结束，分别统计其中字母、数字和其他字符个数。（用scanf语句输入）
#include<stdio.h>
#include<stdlib.h>
const int max = 10000;
// 这里我认为"?"不计入字符个数
// 这里空格也计入字符
int main(void)
{
	char input = '0';
	int num = 0, letter = 0, other = 0;
	while (input != '?') {
		scanf_s("%c", &input);
		if ((input >= 48) && (input <= 57)) num++;
		else if ((input >= 65) && (input <= 90)) letter++;
		else 	if ((input >= 97) && (input <= 122)) letter++;
		else other++;
	}
	printf_s("字母的数量：%d\n", letter);
	printf_s("数字的数量：%d\n", num);
	printf_s("其它字符的数量：%d\n", other-1);

	system("pause");
	return 0;
}


// 3. 找出1-500中所有能同时满足被3除余2，被5除余3，被7除余4的整数


// 4. 


