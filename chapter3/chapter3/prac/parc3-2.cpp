#include <iostream>
#include <string>
using namespace std;

class Data { //클래스 선언부
	int Year, Month, Day; //멤버변수
public:
	Data(int y, int m, int d); //생성자
	Data(string s); //생성자
	void show(); //보여주는 멤버함수
	int getYear() { return Year; }
	int getMonth() { return Month; }
	int getDay() { return Day; }
};
 
//클래스 구현부
//생성자 구현
Data::Data(int y, int m, int d) {
	Year = y;
	Month = m;
	Day = d;
}

/*
string s="1945";
int n =stoi(s);
결과 n=1945 출력됨
*/

//stoi=string to int ,string을 int로 변경하는 함수
//substr('문자열','시작지점','길이')
//strtok('문자열','구분자') 이전 구분자 뒤로 다시 구분자를 찾으려면 strtok(NULL,'구분자')
Data::Data(string s) {
	Year = stoi(s.substr(0, 4));
	Month = stoi(s.substr(5, 1));
	Day = stoi(s.substr(7, 2));
}

void Data::show() {
	cout << Year << "년" << Month << "월" << Day << "일" << endl;
}

int main() {
	Data birth(2014, 3, 20);
	Data independenceDay("1945/8/15");
	independenceDay.show();
	cout << birth.getYear() << ',' << birth.getMonth() << ',' << birth.getDay() << endl;
}