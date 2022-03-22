#include <iostream>
using namespace std;

int main() {
	for (int i = 1; i <= 100; i++) {
		cout << i<<'\t';
		if (i % 10 == 0) {
			// '%'는 나눈 나머지를 계산함, 나눈 나머지가 0이 되는 부분에서 줄을 바꿔줌
			cout << '\n';
		}
	}
}
