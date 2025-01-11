#include <iostream>
#include <string>
using namespace std;

struct Student
{
    string fullName;
    int groupNumber;
    string faculty;
};

Student allStudentMGU[] = 
{
    {"Golovina", 103, "IT security"},
    {"Ryabkov", 103, "IT security"},
    {"Astaykin", 103, "IT security"},
    {"Kurgaev", 101, "Hogwars"},
    {"Emelin", 110, "Hogwars"}
};

void studentSearch()
{
    while (1)
    {
        bool state;
        string textUser;
        cin >> textUser;

        for (Student st : allStudentMGU)
        {
            if (st.fullName.compare(textUser) == 0)
            {
                state = true;
                cout << st.fullName << " " << st.groupNumber << " " << st.faculty << endl; break;
            }
            else state = false;
        }

        if (state == false) cout << "Please re-enter data!" << endl;
    }
}

int main()
{
    cout << "Please enter the data: " << endl;
    studentSearch();
    return 0;
}

