#include <iostream>
using namespace std;

int x{};
int maximum{};

int main ()
{
    for (int x = 25; x > 0; x--)
        {
            if((!(x <= 15) && (x < 20)))
                {  
                    cout << x << endl;
                    break;
                }
        }

    return 0;
}