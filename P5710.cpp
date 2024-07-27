// Ã‚‘¥: https://www.luogu.com.cn/problem/P5710
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <iostream>

using namespace std;

bool xinzhi1(int num);
bool xinzhi2(int num);

void outputnum(bool in1, bool in2);

int main()
{
	int innum = 0;
	cin >> innum;

	bool xz1 = xinzhi1(innum), xz2 = xinzhi2(innum);

	outputnum(xz1, xz2);

	return 0;
}

bool xinzhi1(int num)
{
	if (num % 2 == 0)return true;
	else return false;
}

bool xinzhi2(int num)
{
	if (num > 4 && num <= 12)return true;
	else return false;
}

void outputnum(bool in1, bool in2)
{
	if (in1 == true && in2 == true) cout << 1 << ' ';
	else cout << 0 << ' ';

	if (in1 == true || in2 == true) cout << 1 << ' ';
	else cout << 0 << ' ';

	if (in1 == true && in2 == false) cout << 1 << ' ';
	else if (in1 == false && in2 == true) cout << 1 << ' ';
	else cout << 0 << ' ';

	if (in1 == false && in2 == false) cout << 1 << ' ';
	else cout << 0 << ' ';
}
