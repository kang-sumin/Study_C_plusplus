#include <iostream>
using namespace std;

int main() {
	cout << "5���� �Ǽ��� �Է��϶�>>";
	double n[5];
	for (int i = 0; i < 5; i++) {
		cin >> n[i];
	}

	double max = n[0];
	for (int i = 0; i < 5; i++) {
		if (n[i] >= max)
			max = n[i];
	}

	cout << "���� ū �� = " << max;

}