/*
* 실수 5개를 입력받아 제일 큰수 출력하는 프로그램
*/

#include <iostream>
using namespace std;

int main() {

	double arr_double[5];	//5개의 실수를 저장할 double형 배열 선언
	double max = 0;		//큰수를 저장할 변수 선언
	
	cout << "5 개의 실수를 입력하라>> ";

	for (int i = 0; i < 5; i++) {
		cin >> arr_double[i];
		if (max < arr_double[i]) {
			max = arr_double[i];
		}
	}

	cout << "제일 큰 수 = " << max << endl;

	return 0;
}