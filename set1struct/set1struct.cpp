#include <iostream>
using namespace std;

struct student
{
    string name;
    int groupNumber;
    double averengeGrade;
};

double result = 0.0;

student MGU[] =
{
 {"Masha", 3, 3.5},
 {"Alex", 5, 4.3},
 {"Vanya", 23, 4.5},
 {"Dasha", 12, 4.7},
 {"Pasha", 32, 4.9},
};







int main()
{
    for (int i = 0; i < 5; i++)
    {
    result = result + MGU[i].averengeGrade;
    }
    double averenge = result / 5;


    double range[4] = {};
    for (int i = 0; i < 5; i++)
    {
         range[i] = MGU[i].averengeGrade;
    }
    for (int j = 1; j < 5; j++)
    {
        for (int i = 0; i < 5; i++)
        if(range[i] > range[i + 1])
        {
            double x = range[i];
            range[i] = range[i + 1];
            range[i + 1] = x;
        }
    }


    cout << averenge;
    for (int i = 0; i < 5; i++)
        {
            cout << range[i];
        }

   return 0;
}
