/*
set oge37853
Student - Emelin Egor
29112024
*/

#include <iostream>
using namespace std;

int num{};
int a{};
int b{};
int numbers[1000];

int main() 
{
    cout << "Введите числа: ";
for (int i = 0; i < 1000; i++)
    {
        cin >> num;
        if (num == 0)
        {
            break;
        } 
        numbers[i] = num;
        b++;
    }

for (int i = 0; i < b; i++)
    if (numbers[i] % 2 != 0 && numbers[i] % 3 == 0)
    {
        a++;
    }

    cout << "Количество чисел: " << b << endl << "Количество чисел кратных 3 и нечетных: "  << a << endl;
    return 0;
}