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
		int ls1 = 0;
		ls1 = lsa * 3;
		lsa = lsa / 2;
		if (lsa == 0)
		{
			cout << i;
			break;
		}
	}

	printf("%d %d", lsa, lsa + 2);
	cout << a << std::endl;

	return 0;
}