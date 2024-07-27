#include <iostream>
using namespace std;

int main()
{
	int a, b, c;
	cin >> a >> b >> c;

	int ls1 = 0;
	if (a > b)
	{
		ls1 = a;
		a = b;
		b = ls1;
	}
	if (a > c)
	{
		ls1 = a;
		a = c;
		c = ls1;
	}
	if (b > c)
	{
		ls1 = b;
		b = c;
		c = ls1;
	}

	char l1[3];
	cin >> l1[0] >> l1[1]>> l1[2];//65 66 67

	for (int i = 0; i < 3; i++)
	{
		if (l1[i] == 'A')
		{
			cout << a << ' ';
		}
		if (l1[i] == 'B')
		{
			cout << b << ' ';
		}
		if (l1[i] == 'C')
		{
			cout << c << ' ';
		}
	}

	return 0;
}