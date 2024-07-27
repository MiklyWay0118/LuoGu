// Ã‚‘¥: https://www.luogu.com.cn/problem/P1009
#include <stdio.h>
#include <iostream>

using namespace std;

int main()
{
	int n = 0;
	cin >> n;
	long long muns = 1;
	unsigned long long nums = 0;
	for (int i = 1; i <= n; i++)
	{
		muns = muns * i;
	}
	cout << muns;

	return 0;
}