// Lab3_main.cpp
#include "Money.h"
#include <iostream>

using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    Money m1(10, 50);
    Money m2(5, 75);

    cout << "����� 1: " << m1 << endl;
    cout << "����� 2: " << m2 << endl;

    Money sum = m1 + m2;
    cout << "�����: " << sum << endl;

    Money diff = m1 - m2;
    cout << "�������: " << diff << endl;

    Money m3;
    cout << "����� 3: " << endl;
    cin >> m3;
    cout << "����� 3: " << m3 << endl;

    return 0;
}

