#include<iostream>
#include<cstring>
using namespace std;

int main() {
    int tot = 0; // 총 알파벳 개수 
    int alpha[27] = { 0 }; // 각각의 알파벳을 나타냄
    char text[10000]; // text를 저장할 배열

    cout << "영문 텍스트를 입력하세요. 히스토그램을 그립니다.\n텍스트의 끝은 ; 입니다. 10000개까지 가능합니다.\n";
    cin.getline(text, 10000, ';'); // 최대 10,000개의 영문 텍스트를 ';'전까지 입력받는다

    for (int i = 0; i < strlen(text); i++) { // text[0]부터 text의 끝까지
        /* isalpha 함수 반환형 : 매개변수로 들어온 인자가 알파벳이라면 0이 아닌 수를 반환하고 알파벳이 아니라면 0을 반환합니다.

        더 정확하게 이야기하면 isalpha 함수는
        알파벳 대문자 "A-Z"는 1을 반환.
        알파벳 소문자 'a-z"는 2를 반환.
        알파벳이 아닌것은 0을 반환합니다.

        한번더 이야기 하면 isalpha 함수의 매개변수로
        아스키 코드표에 'A-Z'에 해당하는 65번~90번의 값이 들어오면 1을 반환
        아스키 코드표에 'a-z'에 해당하는 97번~122번의 값이 들어오면 2를 반환
        그 이외의 값이 들어오면 0을 반환하는 함수 입니다.

        */
        if (isalpha(text[i])) { // text[i]가 알파벳이면 참
            /*tolwer() 함수 : 대문자를 소문자로 바꿀때 사용함*/
            if (text[i] < 91) text[i] = tolower(text[i]); // text[i]가 대문자이면 소문자로 변경
            tot++;
            alpha[text[i] - 97]++; // 각각의 알파벳이 몇개인지 카운트
        }
    }

    cout << "총 알파벳 수 " << tot << endl << endl;
    for (int i = 0; i < 26; ++i) { // 알파벳의 소문자 총 개수는 26개 (a~z)
        cout << (char)(i + 'a') << "(" << alpha[i] << ")"; // a부터 z까지 출력 후 각 (알파벳의 개수) 출력
        cout << "\t:  "; // 포맷을 출력하기 위해 탭과 ":" 출력
        for (int j = 1; j <= alpha[i]; j++) // 각 알파벳의 개수만큼 "*" 출력 
            cout << "*";
        cout << endl;
    }
}
