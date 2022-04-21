#include <iostream>
#include <string>

using namespace std;

int enterNumber(string text) {
    int num;
    cout << text;
    cin >> num;
    return num;
}

string enterString(string text) {
    string text1;
    cout << text;
    cin >> text1;
    return text1;
}

int main() {
    int count = enterNumber("Введіть кількість повторювань: ");
    string txt = enterString("Введіть слово або рядок який буде повторюватися: ");

    for (int i = 0; i < count; i++) {
        cout << txt << " " << endl;
    }
}