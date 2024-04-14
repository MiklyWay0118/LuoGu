//un up
#include <iostream>
using namespace std;

int main()
{
	int a;
	cin >> a; 
	int lsa = a;
	for (int i = 0; ; i++)
	{
		lsa = lsa / 2;
		if (lsa == 0)
		{
			cout << i;
			break;
		}
	}

	return 0;
}