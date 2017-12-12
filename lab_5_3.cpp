#include <iostream>

using namespace std;

int main() {

    int score;
    cout << "Enter your score(0-100) : ";
    cin >> score;
    cout << endl;
    if(score > 80) {
        cout << "Grade 4" << endl;
    } else if (score > 70) {
        cout << "Grade 3" << endl;
    } else if (score > 60) {
        cout << "Grade 2" << endl;
    } else if (score >= 50) {
        cout << "Grade 1" << endl;
    } else if (score <= 20) {
        cout << "Grade 0" << endl;
    }
    return 0;
}
