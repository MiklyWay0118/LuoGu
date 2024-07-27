//Ã‚‘¥£∫https://www.luogu.com.cn/problem/P5711
#include <iostream>
using namespace std;

int main()
{
	int putinnum = 0;
	cin >> putinnum;

	if (putinnum % 400 == 0)cout << 1;
	else if (putinnum % 100 == 0)cout << 0;
	else if (putinnum % 4 == 0)cout << 1;
	else cout << 0;

	return 0;
}