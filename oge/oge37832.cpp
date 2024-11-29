#include <iostream>
using namespace std;

int n{}; int kol{};

int main() 
{
  cin >> n;

  for (int i = 0; i < n; i++) 
  {
    int num{};

    cin >> num;

    if (num % 4 == 0) 
    {
      kol++;
    }
  }

  cout << kol << endl;
  return 0;
}