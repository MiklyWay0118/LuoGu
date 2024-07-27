#include <iostream>
using namespace std;

int main()
{
	int need;
	cin >> need;

	int a1, a2, b1, b2, c1, c2;
	cin >> a1 >> a2 >> b1 >> b2 >> c1 >> c2;

	int a, b, c, ls;
	ls = need / a1;
	for (int i = ls; i < 10000; i++)
	{
		if (a1 * i >= need)
		{
			a = a2 * i;
			break;
		}
	}
	ls = need / b1;
	for (int i = ls; i < 10000; i++)
	{
		if (b1 * i >= need)
		{
			b = b2 * i;
			break;
		}
	}
	ls = need / c1;
	for (int i = ls; i < 10000; i++)
	{
		if (c1 * i >= need)
		{
			c = c2 * i;
			break;
		}
	}

	int lsa=10000000;
	if (a < lsa) lsa = a;
	if (b < lsa)lsa = b;
	if (c < lsa)lsa = c;

	cout << lsa;

	return 0;
}