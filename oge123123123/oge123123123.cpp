#include <iostream>
using namespace std;

int n{0}; int summaNumber{};

int main()
{
    cout << "enter the number: " << endl; //1
    cin >> n;

    int arr[n] = {}; //2
    
    for (int i = 0; i < n; i++) //3
    {
        cin >> arr[i];
    }

    for (int j = 0; j < n; j++) //4
    {
        if (arr[j] % 4 == 0)
        {
            summaNumber = summaNumber + 1;
        }
    }

    cout << "Количество чисел кратных 4 :" << summaNumber << endl;
    return 0;
} 