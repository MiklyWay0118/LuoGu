//Ã‚‘¥£∫https://www.luogu.com.cn/problem/P5712
#include <iostream>
using namespace std;

int main()
{
	int n = 0;
	cin >> n;

	int luogu = 11 + 3 * n;
	int local = 5 * n;

	if (local < luogu)cout << "Local" << endl;
	else cout << "Luogu";

	return 0;
}