/*
set struct 1
Student - Emelin Egor
30112024
*/

#include <iostream>
using namespace std;

struct Employee
{
    string names;
    long int salary;
    int age;
};

int main() 
{

Employee john {"John", 45000, 36};
Employee milla {"Milla", 25000};

cout << "Имя: " << john.names << " " << "Зарплата: " << john.salary << " " << "Возвраст: " << john.age << endl;
cout << "Имя: " << milla.names << " " << "Зарплата: " <<  milla.salary << " " << endl;

    return 0;
}