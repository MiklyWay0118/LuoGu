#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
	int n, k;
	cin >> n >> k;

	int list1 = 0, list2 = 0;
	int count1 = 0, count2 = 0;
	for (int i = 1; i <= n; i++)
	{
		if (i % k == 0)
		{
			list1 += i;
			count1++;
		}
		else
		{
			list2 += i;
			count2++;
		}
	}

	double dfa = 0.0, dfb = 0.0;
	dfa = (double)list1 / count1;
	dfb = (double)list2 / count2;

	printf("%.1f %.1f", dfa, dfb);

	return 0;
}