#include <iostream>
using namespace std;

int main()
{
	int num[7] = { 0,0,0,0,0,0,0 };
	for (int i = 0; i < 7; i++)
	{
		int a, b;
		cin >> a >> b;
		if (a + b > 8) num[i] = a + b;
	}

	int maxnum = 0;
	int maxday = 0;
	for (int i = 0; i < 7; i++)
	{
		if (num[i] > maxnum)
		{
			maxnum = num[i];
			maxday = i;
		}
	}

	if (maxnum == 0)cout << 0;
	else cout << maxday + 1;

	return 0;
}