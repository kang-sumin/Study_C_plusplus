#include <iostream>
using namespace std;

class Sample {
	int a;
public:
	Sample() { a = 100; cout << a << "\n"; }
	Sample(int x) { a = x; cout << a << ' '; }
	Sample(int x, int y) { a = x * y; cout << a << ' '; }
	int get() { return a; }
};

int main() {
	Sample arr[3];
	int sum = 0;

	Sample* p = arr;

	for (int i = 0; i < 3; i++) {
		//sum += arr[i].get();
		//sum += (arr+i)->get();
		//sum += p[i].get();
		//sum += (*p++).get();
		sum += (p+i)->get();
	}
	cout << sum << endl;
	
}