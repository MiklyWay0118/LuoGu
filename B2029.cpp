// Ã‚‘¥: https://www.luogu.com.cn/problem/B2029
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <iostream>

using namespace std;

int main()
{
	int h = 0, r = 0;
	cin >> h >> r;
	double rj = 3.14*r*r*h;

	printf("%d", (int)((20000 + rj - 1) / rj));

	return 0;
}