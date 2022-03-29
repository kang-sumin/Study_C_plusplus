#include<iostream>
#include<string>
using namespace std;

class Histogram {
    string sent;
public:
    Histogram(string sent);
    void put(string sent);
    void putc(char c);
    void print();
};

Histogram::Histogram(string text) {
    sent = text;
    cout << sent << endl;
}
void Histogram::put(string text) {
    sent += text;
    cout << text;
}
void Histogram::putc(char c) {
    sent += c;
    cout << c;
}
void Histogram::print() {
    int alpha[26] = { 0 };
    int num = 0;
    for (int i = 0; i < sent.length(); i++) {
        if (isalpha(sent[i])) {
            char c = tolower(sent[i]);
            alpha[c - 'a']++;
            num++;
        }
    }
    cout << endl << endl;
    cout << "ÃÑ ¾ËÆÄºª ¼ö " << num;
    cout << endl << endl;
    for (int i = 0; i < 26; ++i) {
        char c = 'a' + i;
        cout << c << " (" << alpha[i] << ")\t: ";
        for (int j = 0; j < alpha[i]; ++j) {
            cout << "*";
        }
        cout << endl;
    }
}

int main() {
    Histogram elvisHisto("Wise men say, only fools rush in But I can't help, ");
    elvisHisto.put("falling in love with you");
    elvisHisto.putc('-');
    elvisHisto.put("Elvis Presley");
    elvisHisto.print();
}
