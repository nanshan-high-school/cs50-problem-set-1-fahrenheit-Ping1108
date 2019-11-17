#include <iostream>
using namespace std;

int main() {
    float C;

    cout << "請輸入攝氏溫度:";
    cin >> C;

    float F = (C * 9/5 + 32); 
    cout << F;   
}
