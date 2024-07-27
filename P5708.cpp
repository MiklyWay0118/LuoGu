// Ã‚‘¥: https://www.luogu.com.cn/problem/P5708
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	float a, b, c, l1;
	scanf("%f %f %f", &a, &b, &c);

	if (a > b)l1 = a, a = b, b = l1;
	if (b > c)l1 = b, b = c, c = l1;
	float l2 = a * b * 0.5f;

	printf("%.1f", l2);

	return 0;
}