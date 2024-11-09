/*
set 0c Pattern2
Student - Emelin Egor
09112024
*/
#include <iostream>
using namespace std;

int main() {
    
    for (int i = 1; i <= 5; i++) {
        
        for (int j = 0; j < i; j++) {
            cout << "*";
        }
        
        cout << endl;
    }
    return 0;
}