#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int n;
    cin >> n;

    int max = -1; 

    for (int i = 0; i < n; ++i) {
        int num;
        cin >> num;

        if (num % 6 == 0) {
            if (num > max) {
                max = num;
            }
        }
    }

    cout << max << endl;

    return 0;
}