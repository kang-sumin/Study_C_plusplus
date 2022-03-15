#include <iostream>
#include <string>
using namespace std;

class Account {
	string name; //계좌 주인
	int id; //계좌 번호
	int balance; //잔액
public:
	Account(string n, int i, int bal); //생성자
	void deposit(int money); //입금 함수
	int withdraw(int money); //출금 함수
	int inquiry(); //잔액 함수
	string getOwner() { return name; }
};

Account::Account(string n, int i, int bal) {
	name = n;
	id = i;
	balance = bal;
}

void Account::deposit(int money) {
	balance += money;
}

int Account::withdraw(int money) {
	if (money > balance) { // 저축된 돈이 찾는 금액보자 작은 경우
		money = balance;
		balance = 0;
	}
	else
		balance -= money;

	return money; // 실제 찾은 금액 리턴
}

int Account::inquiry() {
	return balance;
}

int main() {
	Account a("kitae", 1, 5000); 	// id 1번, 잔액 5000원, 이름이 kitae인 계좌 생성
	a.deposit(50000);				// 20000원 저금
	cout << a.getOwner() << "의 잔액은 " << a.inquiry() << endl;
	int money = a.withdraw(20000);	// 20000원 출금. withdraw()는 출금한 실제 금액 리턴
	cout << a.getOwner() << "의 잔액은 " << a.inquiry() << endl;
}