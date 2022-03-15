#include <iostream>
#include <string>
using namespace std;

class Data { //Ŭ���� �����
	int Year, Month, Day; //�������
public:
	Data(int y, int m, int d); //������
	Data(string s); //������
	void show(); //�����ִ� ����Լ�
	int getYear() { return Year; }
	int getMonth() { return Month; }
	int getDay() { return Day; }
};
 
//Ŭ���� ������
//������ ����
Data::Data(int y, int m, int d) {
	Year = y;
	Month = m;
	Day = d;
}

/*
string s="1945";
int n =stoi(s);
��� n=1945 ��µ�
*/

//stoi=string to int ,string�� int�� �����ϴ� �Լ�
//substr('���ڿ�','��������','����')
//strtok('���ڿ�','������') ���� ������ �ڷ� �ٽ� �����ڸ� ã������ strtok(NULL,'������')
Data::Data(string s) {
	Year = stoi(s.substr(0, 4));
	Month = stoi(s.substr(5, 1));
	Day = stoi(s.substr(7, 2));
}

void Data::show() {
	cout << Year << "��" << Month << "��" << Day << "��" << endl;
}

int main() {
	Data birth(2014, 3, 20);
	Data independenceDay("1945/8/15");
	independenceDay.show();
	cout << birth.getYear() << ',' << birth.getMonth() << ',' << birth.getDay() << endl;
}