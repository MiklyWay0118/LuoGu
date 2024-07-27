// Ã‚‘¥: https://www.luogu.com.cn/problem/P1035
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int k = 0;
	double s = 0.0;
	scanf("%d", &k);
	for (int i = 1; i < 999999999; i++)
	{
		s += 1.0 / i;
		if (s >= k)
		{
			printf("%d\n", i);
			break;
		}
	}
	return 0;
}