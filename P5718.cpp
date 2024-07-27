#include <iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;

	int min = 10000;
	int ls = 0;
	for (int i = 0; i < n; i++)
	{
		cin >> ls;
		if (ls < min)
		{
			min = ls;
		}
	}

	cout << min;

	return 0;
}