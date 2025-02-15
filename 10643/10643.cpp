#include <iostream>
using namespace std;

int x{};

int main ()
{
    for (int x = 25; x > 0; x--)
        {
            if((!(x & 2 == 0) && !(x >= 7)))
                {  
                    cout << x << endl;
                    break;
                }
        }

    return 0;
}