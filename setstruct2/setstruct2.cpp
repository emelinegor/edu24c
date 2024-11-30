/*
set struct 2
Student - Emelin Egor
30112024
*/

#include <iostream>
using namespace std;

struct human
{
    string name;
    short idpc;
    string office;
    string tel;
    string email;
};

int main() 
{

    human egor {"Egor", 8, "25 office", "+79271881997", "egoremelinegor@gmail.com"};

    cout << "Имя: " << egor.name << endl << "Номер пк: " << egor.idpc << endl << "Кабинет: " << egor.office << endl << "Телефон: " << egor.tel << endl << "почта: " << egor.email << endl;

    return 0;
}