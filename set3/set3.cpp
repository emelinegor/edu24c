#include <iostream>
using namespace std;

int Data{};
int result{};

int UserData()
{
    cout << "Please, enter the data:" << endl;
    cin >> Data;
    return 0;
}

 int Result()
 {
    int result = Data * 1.8;
    return 0;
 }

 int main()
 {
    UserData();
    Result();

     cout << result << endl;

    return 0;
 }










