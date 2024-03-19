#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    int ranNo = rand()%100+1;
    int gue;
   while (gue!= ranNo){
        cout << "Enter guessing number ";
        cin >> gue;
        if (gue > ranNo) {
            cout << "Too high"<< endl;
        } else if (gue < ranNo) {
            cout << "Too low" << endl;
        } else {
            cout << " guessed the coreect " << ranNo << endl;
        }
    };
    return 0;
}
