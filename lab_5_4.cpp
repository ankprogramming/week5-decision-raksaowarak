#include <iostream>

using namespace std;

int main() {

    int menu;

    cout << "Choose Program" << endl;
    cin >> menu;

    switch (menu) {
        case 1: cout << "Call Program 1";
        case 2: cout << "Call Program 2";
        case 3: cout << "Call Program 3";
        case 4: cout << "Call Program 4";
        case 5: cout << "Call Program 5";
        default : cout << "Error";
    }

    return 0;
}
