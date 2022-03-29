#include<iostream>
#include<string>
using namespace std;

class Person {
    string name;
    string tel;
public:
    Person();
    string getName() { return name; }
    string getTel() { return tel; }
    void set(string name, string tel);
};

Person::Person() {} // ������

void Person::set(string N, string T) {
    name = N;
    tel = T;
}

int main() {
    string Name, Tel;
    Person* pInf = new Person[3];

    cout << "�̸��� ��ȭ ��ȣ�� �Է��� �ּ���\n";

    for (int i = 0; i < 3; i++) {
        cout << "��� " << i + 1 << ">> ";
        cin >> Name >> Tel;
        pInf[i].set(Name, Tel);
    }

    cout << "��� ����� �̸��� ";
    for (int i = 0; i < 3; i++) {
        cout << pInf[i].getName() << " ";
    }

    cout << endl << "��ȭ��ȣ �˻��մϴ�. �̸��� �Է��ϼ���>>";
    cin >> Name;

    for (int i = 0; i < 3; i++) {
        if (Name.compare(pInf[i].getName()) == 0) {
            cout << "��ȭ ��ȣ�� " << pInf[i].getTel();
            break;
        }
    }
}
