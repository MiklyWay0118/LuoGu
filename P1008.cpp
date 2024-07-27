// Ã‚‘¥: https://www.luogu.com.cn/problem/P1008
#include<iostream>
#include<iomanip>
using namespace std;
int main() {
    int a, b, c;
    int m[9];
    for (a = 123; 3 * a < 987; a++) {
        int flag = 1;
        b = 2 * a;
        c = 3 * a;
        m[0] = a / 100;
        m[1] = a / 10 % 10;
        m[2] = a % 10;
        m[3] = b / 100;
        m[4] = b / 10 % 10;
        m[5] = b % 10;
        m[6] = c / 100;
        m[7] = c / 10 % 10;
        m[8] = c % 10;
        for (int i = 0; i < 9; i++) {
            for (int j = i + 1; j < 9; j++) {
                if (m[i] == m[j] || m[i] == 0)
                    flag = 0;
            }
        }
        if (flag == 1)
            cout << a << setw(4) << b << setw(4) << c << endl;
    }
    return 0;
}