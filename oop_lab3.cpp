// Lab3_main.cpp
#include "Money.h"
#include <iostream>

using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    Money m1(10, 50);
    Money m2(5, 75);

    cout << "Ñóììà 1: " << m1 << endl;
    cout << "Ñóììà 2: " << m2 << endl;

    Money sum = m1 + m2;
    cout << "Ñóììà: " << sum << endl;

    Money diff = m1 - m2;
    cout << "Ðàçíèöà: " << diff << endl;

    Money m3;
    cout << "Ñóììà 3: " << endl;
    cin >> m3;
    cout << "Ñóììà 3: " << m3 << endl;

    return 0;
}

