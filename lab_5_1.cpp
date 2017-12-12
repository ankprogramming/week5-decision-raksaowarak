#include <iostream>
#include <string>

using namespace std;

int main ()
{
    // ประกาศตัวแปรชื่อ
    string name1, name2;

    // รับชื่อที่ 1
    cout << "Enter the first name: ";
    cin >> name1;

    // รับชื่อที่ 2
    cout << "Enter the second name: ";
    cin >> name2;
    if (name1 == name2)
    {
        cout << "The two names are equal" << endl;
    }
    else
    {
        cout << "The two names are not equal" << endl;
    }
    // เขียนเงื่อนไขให้ถูกต้องซะ หนูๆ
    return 0;
}
