#include <iostream>
using namespace std;

int sum(int a, int b) {
	int sum = 0;
	for (int i = a; i <= b; i++) {
		sum += i;
	}
	return sum;
}

int sum(int a) {
	int sum = 0;
	for (int i = 0; i <= a; i++) {
		sum += i;
	}
	return sum;
}

int main() {
	cout << sum(3, 5) << endl;
	cout << sum(100) << endl;
}