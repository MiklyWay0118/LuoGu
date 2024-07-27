//Ã‚‘¥£∫https://www.luogu.com.cn/problem/P5712
#include <iostream>
using namespace std;

int main()
{
	int readinnum = 0;
	cin >> readinnum;

	if (readinnum == 0)cout << "Today, I ate 0 apple.";
	else if (readinnum == 1)cout << "Today, I ate 1 apple.";
	else cout << "Today, I ate " << readinnum << " apples.";

	return 0;
}