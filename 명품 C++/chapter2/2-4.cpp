#include <iostream>
using namespace std;

int main() {
	cout << "5개의 실수를 입력하라>>";
	double n[5];
	for (int i = 0; i < 5; i++) {
		cin >> n[i];
	}

	double max = n[0];
	for (int i = 0; i < 5; i++) {
		if (n[i] >= max)
			max = n[i];
	}

	cout << "제일 큰 수 = " << max;

}