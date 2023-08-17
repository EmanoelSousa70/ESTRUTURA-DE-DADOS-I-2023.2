#include <iostream>
using namespace std;

string f1;
string f2;

int main() {
    cout << "Digite a primeira string: ";
    cin >> f1;

    cout << "Digite a segunda string: ";
    cin >> f2;

    if (f1 == f2) {
        cout << "São iguais" << endl;
    } else {
        cout << "São diferentes!!" << endl;
    }

    return 0;
}
