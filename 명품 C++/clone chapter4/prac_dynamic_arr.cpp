#include <iostream>
using namespace std;

int main() {
	int* p = new int[5];
	if (!p)
		return 0;

	for (int i = 0; i < 5; i++) {
		//p[i] = i;
		*(p + i) = i;

	}

	for (int i = 0; i < 5; i++) {
		cout << p[i] << '\t';
	}

	delete[] p;

	return 0;
}