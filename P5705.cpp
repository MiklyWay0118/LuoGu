// Ã‚‘¥: https://www.luogu.com.cn/problem/P5705
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <iostream>

int main()
{
	int a = 0, b = 0, c = 0, d = 0;
	scanf("%d%d%d.%d", &a, &b, &c, &d);

	printf("%d.%d%d%d", d, c, b, a);
	return 0;
}