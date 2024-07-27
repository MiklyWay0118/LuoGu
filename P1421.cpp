// Ã‚‘¥: https://www.luogu.com.cn/problem/P1421
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <iostream>

using namespace std;

int main()
{
	int yuan, jiao;
	cin >> yuan >> jiao;

	jiao = jiao + 10 * yuan;

	cout << jiao / 19;

	return 0;
}