// Ã‚‘¥: https://www.luogu.com.cn/problem/P1425
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <iostream>

using namespace std;

int main()
{
	int a, b, c, d;
	cin >> a >> b >> c >> d;
	int lsmin = d - b;
	int lshour = c - a;
	lsmin = lsmin + lshour * 60;

	int min, hour;
	hour = lsmin / 60;
	min = lsmin % 60;

	cout << hour << ' ' << min;

	return 0;
}