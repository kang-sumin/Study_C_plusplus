#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

class SelectableRandom {
    int num;
public:
    SelectableRandom(int _num); // ¸Å°³º¯¼ö·Î Â¦¼ö È¤Àº È¦¼ö¸¦ ¹Þ´Â´Ù 
    int next();
    int nextInRange(int a, int b);
};
SelectableRandom::SelectableRandom(int _num) {
    num = _num;
    srand((unsigned)time(0));
}

int SelectableRandom::next() {
    int ran = rand();
    if (num % 2 == 0) { // Â¦¼ö return 
        if (ran % 2 == 0)
            return ran;
        else
            return --ran;
    }
    else {
        if (ran % 2 == 0) // È¦¼ö return 
            return ++ran;
        else
            return ran;
    }
}

int SelectableRandom::nextInRange(int a, int b) {
    int ran = rand() % (b - a + 1) + a;
    if (num % 2 == 0) { // Â¦¼ö return
        if (ran % 2 == 0)
            return ran;
        else
            return ++ran;
    }
    else { // È¦¼ö return 
        if (ran % 2 == 0)
            return ++ran;
        else
            return ran;
    }
}

int main() {
    SelectableRandom r1(0); // Â¦¼ö ·£´ý Á¤¼ö ¹ß»ý
    cout << "-- 0¿¡¼­ " << RAND_MAX << "±îÁöÀÇ Â¦¼ö ·£´ý Á¤¼ö 10 °³--" << endl;
    for (int i = 0; i < 10; i++) {
        int n = r1.next();
        cout << n << ' ';
    }

    SelectableRandom r2(1); // È¦¼ö ·£´ý Á¤¼ö ¹ß»ý
    cout << endl << endl << "-- 2¿¡¼­ " << "9 ±îÁöÀÇ ·£´ý È¦¼ö  Á¤¼ö 10 °³ --" << endl;
    for (int i = 0; i < 10; i++) {
        int n = r2.nextInRange(2, 9);
        cout << n << ' ';
    }
    cout << endl;
}
