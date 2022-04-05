#define _CRT_SECURE_NO_WARNINGS // 비주얼 스튜디오에서 stpcpy() 때문에 발생하는 컴파일 오류를 막기 위해
#include <iostream>
#include <cstring>
using namespace std;

class Book {
	char* title; // 제목 문자열
	int price; // 가격
public:
	Book(const char* title, int price);
	Book(Book& b); // (3) 정답. 깊은 복사 복사 생성자 작성
	~Book();
	void set(const char* title, int price);
	void show() { cout << title << ' ' << price << "원" << endl; }
};

Book::Book(const char* title, int price) { // (1) 정답
	int len = strlen(title);
	this->title = new char[len + 1];
	strcpy(this->title, title);
	this->price = price;
}

Book::~Book() { // (1) 정답
	if (title)
		delete[] title;
}

void Book::set(const char* title, int price) { // (1) 정답
	if (this->title) // 현재 객체에 title에 메모리가 할당되어 책 이름이 적혀있는 상황
		delete[] this->title; // 현재 title에 할당된 메모리 반환
	int len = strlen(title);
	this->title = new char[len + 1]; // 새로 메모리 할당
	strcpy(this->title, title);
	this->price = price;
}

/*
Book::Book(Book& b) { // (2) 정답. 디폴트 복사 생성자
	title = b.title;
	price = b.price;
}
*/

Book::Book(Book& b) { // (3) 정답. 깊은 복사 복사 생성자 작성
	int len = strlen(b.title);
	title = new char[len + 1];
	strcpy(title, b.title);
	price = b.price;
}

int main() {
	Book cpp("명품C++", 10000);
	Book java = cpp;
	java.set("명품자바", 12000);
	cpp.show();
	java.show();
}