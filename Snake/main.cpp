#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;
void Welcome(){
    cout << "\n\n\n\n\t\t\t=================================================================\n";
    cout << "\t\t\t=\t\t\t\t\t\t\t\t=\n" << endl;
    cout << "\t\t\t=\t\t\t\t\t\t\t\t=\n" << endl;
    cout << "\t\t\t=\t   Welcome to my world---The Snake World. \t\t=\n" << endl;
    cout << "\t\t\t=\t   author=Aaron in Li xiang da ning road) \t\t=\n" << endl;
    cout << "\t\t\t=\t\t\t\t\t\t\t\t=\n" << endl;
    cout << "\t\t\t=\t\t\t\t\t\t\t\t=\n" << endl;
    cout << "\t\t\t=================================================================\n";
    system("pause");
    system("cls");
}
 void GameStart(){
    Welcome();
}
int main() {
    GameStart();
    return 0;
}
