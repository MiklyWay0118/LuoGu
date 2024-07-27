// Ã‚‘¥: https://www.luogu.com.cn/problem/P3954
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <iostream>

int main()
{
	int a, b, c, x = 0;
	scanf("%d %d %d", &a, &b, &c);

	x = 0.2 * a + 0.3 * b + 0.5 * c;
	printf("%d", x);

	return 0;
}