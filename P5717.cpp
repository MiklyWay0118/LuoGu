#include <iostream>
using namespace std;

int isTriangle(int a, int b, int c);
void Tftriangle(int a, int b, int c);
void Pdtriangle(int a, int b, int c);

int main()
{
	int a, b, c;
	cin >> a >> b >> c;

	///≈≈–Ú a<b<c
	int ls;
	if (a > b) {
		ls = a;
		a = b;
		b = ls;
	}
	if (a > c) {
		ls = a;
		a = c;
		c = ls;
	}
	if (b > c) {
		ls = b;
		b = c;
		c = ls;
	}

	int ls2 = isTriangle(a, b, c);
	if (ls2 == 1) {
		Tftriangle(a, b, c);
		Pdtriangle(a, b, c);
	}
	else if (ls2 == 2) cout << "Not triangle";

	return 0;
}

int isTriangle(int a, int b, int c)
{
	if (a + b > c && c - a < b && c - b < a) return 1;
	else return 2;
}

void Tftriangle(int a, int b, int c)
{
	int a2 = a * a;
	int b2 = b * b;
	int c2 = c * c;

	if (a2 + b2 == c2) cout << "Right triangle" << endl;
	else if (a2 + b2 < c2) cout << "Obtuse triangle" << endl;
	else if (a2 + b2 > c2) cout << "Acute triangle" << endl;
}

void Pdtriangle(int a, int b, int c)
{
	if (a == b || b == c || c == a) cout << "Isosceles triangle" << endl;
	if (a == b && b == c && c == a) cout << "Equilateral triangle" << endl;
}
