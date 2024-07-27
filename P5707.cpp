// Ã‚‘¥: https://www.luogu.com.cn/problem/P5707
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <iostream>

using namespace std;

int main()
{
	int s = 0, u = 0, time = 470;
	scanf("%d %d", &s, &u);
	time -= s / u;
	if (time < 0) time += 1440;
	else time -= 1;
	int hour = time / 60;
	int min = time - hour * 60;
	
	if (time < 0)
	{
		if (hour < 10)
		{
			if (min < 10) printf("0%d:0%d", hour, min);
			else printf("0%d:%d", hour, min);
		}
		else
		{
			if (min < 10) printf("%d:0%d", hour, min);
			else printf("%d:%d", hour, min);
		}
	}
	else
	{
		if (hour < 10)
		{
			if (min < 10) printf("0%d:0%d", hour, min);
			else printf("0%d:%d", hour, min);
		}
		else
		{
			if (min < 10) printf("%d:0%d", hour, min);
			else printf("%d:%d", hour, min);
		}
	}


	return 0;
}