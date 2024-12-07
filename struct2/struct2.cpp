#include <iostream>
using namespace std;

struct event
{
    string name;
    int data;
    short school;
};

event NewYear9 = {"New Year 2025", 221224 , 9};
event NewYear12 = {"New Year Super", 251224, 12};

int NewYear37 = 37;

void printEvent(event *p)
{
    cout << p->name << p->data << p->school << endl;
}

int main()
{
    printEvent(&NewYear9);
    return 0;
}