#include <iostream>
#include <string>

using namespace std;

int main() {

    string name1;

    // รับชื่อ
    cout << "Enter Your name: ";
    cin >> name1;

    // แสดงชื่อ โดยตัดให้เหลือแค่ 10 ตัวอักษร
    if (name1.length() > 10) {
        cout << "Your name is too long!!!!" << endl;
        name1.erase (name1.begin()+10, name1.end());
        cout << "Your name has been changed to " << name1 << endl;
    }
    if (name1.length() < 10)t8
        cout << name1 << endl;
    return 0;
}
