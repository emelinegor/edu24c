#include <iostream>
using namespace std;

int n{};

int main()
{

cout << "Ввкдите кол-во чисел в массиве: " << endl;
cin >> n;

int numbers[n] = {};
int min_number{};

    cout << "Введите числа: " << endl;
    for (int f = 0; f < n; f++)
        {
             cin >> numbers[f];
        }

for (int b = 0; b < n; b++)
    {
        if (numbers[b] % 3 == 0)
            {
                if (numbers[b] < min_number)
                    {
                        min_number = numbers[b];
                    }
            }

    }

    cout << min_number << endl;

    return 0;
}