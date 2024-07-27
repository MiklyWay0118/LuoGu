// Ã‚‘¥: https://www.luogu.com.cn/problem/P7909
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;

int bonus2(int n, int L, int R);

int main(int argc, char* argv[])
{
    int n, L, R;
    cin >> n >> L >> R;

    int ans = bonus2(n, L, R);
    cout << ans;

    return 0;
}

int bonus2(int n, int L, int R)
{
    int a = L % n;
    int b = n - a;
    int p = L + b;

    if (p <= R) return n - 1;
    else return R % n;
}