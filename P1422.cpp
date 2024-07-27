#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
	int count;
	cin >> count;

	if (count <= 150) {
		printf("%.1f", count * 0.4463);
	}
	else if (count <= 400) {
		printf("%.1f", 66.945 + (count - 150) * 0.4663);
	}
	else if (count > 400) {
		printf("%.1f", 183.52 + (count - 400) * 0.5663);
	}

	return 0;
}