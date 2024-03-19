#include <iostream>
using namespace std;
int main() {
    char oper;
    float f1, f2,r;
    cout << "Enter f1: ";
    cin >> f1;
    cout << "Enter f2: ";
    cin >> f2;
    cout << "Enter operator ";
    cin >> oper;
    switch(oper) {
        case '+':
            r=f1 + f2;
            break;
        case '-':
            r=f1 - f2;
            break;
        case '*':
            r=f1 * f2;
            break;
        case '/':
            if (f2 == 0)
                cout << "f2 should not be zero";
            else
                r=f1/f2;
            break;
        default:
            cout << "Not possible";
    }
    cout << "result " << r;
    return 0;
}
