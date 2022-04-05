#include <iostream>
using namespace std;

class Accumulator {
	int value;
public:
	//�Ű����� value�� ��� value�� �ʱ�ȭ�Ѵ�.
	Accumulator(int value) { this->value = value; }

	//value�� n�� ���� ���� �����Ѵ�.
	Accumulator& add(int n);

	//������ �� value�� �����Ѵ�.
	int get() { return value; }
};

Accumulator& Accumulator::add(int n) {
	value += n;
	return *this;
}

int main() {
	Accumulator acc(10);
	acc.add(5).add(6).add(7); // acc�� value ����� 28�� �ȴ�.
	cout << acc.get() << endl; // 28 ���
}