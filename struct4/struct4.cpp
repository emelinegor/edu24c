/*
struct4
Student - Emelin Egor
07122024
*/

#include <iostream>
using namespace std;

struct resume
{
    string name;
    short age;
    string work_experience;
    string tel;
    string email;
    string nik;
};

resume Andrey = {"Andrey", 25, "3 year", "+795252525252", "andrey52@mail.ru", "pypsovAndrey"};
resume Alex = {"Alex", 32, "7 year", "+79521771016", "alexpetrovich@mail.ru", "AlexPetrovich"};

void PrintResume(resume *p)
{
    cout << p->name << p->age << p->work_experience << p->tel << p->email << p->nik << endl;
}

int main()
{
    PrintResume(&Andrey);
    PrintResume(&Alex);
    return 0;
}