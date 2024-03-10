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

	char l1, l2, l3;
	cin >> l1 >> l2 >> l3;//65 66 67

	return 0;
}