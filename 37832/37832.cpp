#include <iostream>
using namespace std;

int n{0}; int kol{0};

int main()
{
    cout << "enter the number" << endl; //1
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
            kol = kol + 1;
        }
    }

    cout << kol << endl;
    return 0;
}