#include <iostream>
#include <string>
using namespace std;

struct Human {
    string name;
    int age;
    string gender;
};

Human createHuman() {
    Human h;
    cout << "Введите имя: ";
    getline(cin, h.name);
    cout << "Введите возраст: ";
    cin >> h.age;
    cout << "Введите пол: ";
    cin >> h.gender;
    return h;
}

void printHuman(const Human& h) {
    cout << "Имя: " << h.name << endl;
    cout << "Возраст: " << h.age << endl;
    cout << "Пол: " << h.gender << endl;
}

int main() {
    Human person = createHuman();
    printHuman(person);

    return 0;
}
