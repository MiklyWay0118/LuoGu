// Ã‚‘¥: https://www.luogu.com.cn/problem/P5709
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <iostream>

using namespace std;

int main()
{
	int m = 0, t = 0, s = 0;
	cin >> m >> t >> s;

	if (t == 0 || (m - s / t) <= 0)cout << 0;
	else if (s % t == 0) cout << (int)m - s / t;
	else if (s % t != 0) cout << (int)m - s / t - 1;

	return 0;
}