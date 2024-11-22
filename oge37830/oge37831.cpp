#include <iostream>
using namespace std;

int main() {
  int n{};
  cin >> n;

  int sum = 0; 

  for (int i = 0; i < n; ++i) {
    int num{};
    cin >> num;
    if (num % 6 == 0) {
      sum += num;
    }
  }

  cout << sum << endl;
  return 0;
}