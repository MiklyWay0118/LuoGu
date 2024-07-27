#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;

    int numbers[] = { a, b, c };
    int size = sizeof(numbers) / sizeof(numbers[0]);
    sort(numbers, numbers + size);

    for (int i = 0; i < size; i++) {
        cout << numbers[i] << " ";
    }
    cout << endl;

    return 0;
}
