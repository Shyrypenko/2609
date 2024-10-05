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
    cout << "������� ���: ";
    getline(cin, h.name);
    cout << "������� �������: ";
    cin >> h.age;
    cout << "������� ���: ";
    cin >> h.gender;
    return h;
}

void printHuman(const Human& h) {
    cout << "���: " << h.name << endl;
    cout << "�������: " << h.age << endl;
    cout << "���: " << h.gender << endl;
}

int main() {
    Human person = createHuman();
    printHuman(person);

    return 0;
}
