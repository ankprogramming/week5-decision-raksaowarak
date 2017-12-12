#include <iostream>
#include <string>
using namespace

int main () {

  string playerName;
  int score = 0, life = 3;
  char choice1,choice2,choice3;

  // ประกาศตัวแปรเพื่อรับการเลือกคำตอบของผู้เล่น
  // เช่นการเป็น ตัวเลขให้ประกาศเป็น int choice1;
  // ถ้ารับคำตอบเป็นตัวอักษร ให้ประกาศเป็น char choice1;
  //

  cout << "Welcome to Mini Adventure Game." << endl;
  cout << "Please enter your name : ";

  cin >> playerName;

   // เขียนคำสั่งรับชื่อ แล้วเก็บในตัวแปร playerName
    if (playerName.length() > 8) {
        playerName.erase (playerName.begin()+8, playerName.end());
        cout << "Your name has been changed to " << playerName << endl;
    }
    else {cout << playerName << endl;}


  // เขียนคำสั่งแสดงผล คำบรรยายสภาพแวดล้อม สถานการณ์ และคำทักทายที่มีชื่อตัวละคร
   cout << "Hello " << playerName << ". You are in Big C. You are walking happily. Suddenly, to see the bag, you want to come up immediately."
        << " But you have not enough money.." << endl;


  // เขียนคำสั่งแสดงผล คำถามให้ผู้ใช้ตัดสินใจ
   cout << "What should you do? (A)Borrow money,(S)steal : ";


  // เขียนคำสั่งรับคำตอบจากผู้ใช้ แล้วให้คะแนนหรือทำโทษ จากการตัดสินใจนั้น
  // เช่น
  //     cin >> choice1;
  //     switch(choice1) {
  //        case "S" : score += 10; life -= 1; cout << "You stole money from people. Now you can shopping.";
  //        case "A" : score += 50; cout << "You ask for money from people then you get 100 baht. You are very happy. Now you can shopping."
  //     }


    cin >> choice1;

    switch(choice1) {
    case 'A':
        score +=50;
        cout << "You ask for money from friend then you get 1,000 baht. You are very happy. Now you can shopping."
    case 'S':
        score +=10;
        cout << "Stole the bag from the store. Now you can shopping."
        }

  // ฝึกสร้างสถานการณ์และสร้างเงื่อนไข อีก 2 สถานการณ์
  cout << " You walk on. You are walking happily. Suddenly, to see the dress, you want to come up immediately."
       << " But you have not enough money.." << endl;
  cout << "What should you do? (D)Borrow money,(F)steal : ";

   cin >> choice2;

    switch(choice2) {
    case 'D':
        score +=50;
        cout << "If you ask for money from friends you will receive another 500 baht. You are very happy. Now you can shopping."
    case 'F':
        score +=10;
        cout << "Stole the dress from the store. Now you can shopping."
        }


  cout << " You walk on. You are walking happily. Suddenly, to see the dress, you want to come up immediately."
       << " But you have not enough money.." << endl;
  cout << "What should you do? (D)Borrow money,(F)steal : ";

   cin >> choice3;

    switch(choice3) {
    case 'D':
        score +=50;
        cout << "If you ask for money from friends you will receive another 500 baht. You are very happy. Now you can shopping."
    case 'F':
        score +=10;
        cout << "Stole the dress from the store. Now you can shopping."
        }


  // สรุปผลคะแนนและพลังชีวิต
  cout << "Congratulations! You win the game with " << score << "Score. See you next time on next game. GG." << endl;

  return 0;
}
