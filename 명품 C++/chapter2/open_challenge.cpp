#include <iostream>
#include <string>
using namespace std;

int main()
{
	string s, o;
	cout << "���� ���� �� ������ �մϴ�. ����, ����, �� �߿��� �Է��ϼ���." << endl;
	cout << "���>>";
	getline(cin, s);
	cout << "�ƶ�>>";
	getline(cin, o);

	if (s == "����") {
		if (o == "����") cout << "�����ϴ�." << endl;
		else if (o == "����") cout << "��ǰ� �̰���ϴ�." << endl;
		else if (o == "��") cout << "�ƶ��� �̰���ϴ�." << endl;
	}
	else if (s == "����") {
		if (o == "����") cout << "�����ϴ�." << endl;
		else if (o == "��") cout << "��ǰ� �̰���ϴ�." << endl;
		else if (o == "����") cout << "�ƶ��� �̰���ϴ�." << endl;
	}
	else if (s == "��") {
		if (o == "��") cout << "�����ϴ�." << endl;
		else if (o == "����") cout << "��ǰ� �̰���ϴ�." << endl;
		else if (o == "����") cout << "�ƶ��� �̰���ϴ�." << endl;
	}
}