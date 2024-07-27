#include <iostream>
using namespace std;

int main()
{
	int x, n;
	cin >> x >> n;

	int count = 0;

	for (int i = 0; ; i++)
	{
		if (x == 1 || x == 2 || x == 3 || x == 4 || x == 5) count+=250;
		if (i == n-1)break;
		if (x == 7)x = 1;
		else x++;
	}

	cout << count;

	return 0;
}