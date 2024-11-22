#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int n;
    cin >> n;

    int max_multiple_of_5 = -1; // Инициализация с минимально возможным значением

    for (int i = 0; i < n; ++i) {
        int num;
        cin >> num;

        if (num % 5 == 0) {
            // Проверяем, является ли число кратным 5.
            // Если да, то сравниваем его с текущим максимумом.
            if (num > max_multiple_of_5) {
                max_multiple_of_5 = num;
            }
        }
    }

    cout << max_multiple_of_5 << endl;

    return 0;
}