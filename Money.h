#pragma once
// Money.h
#ifndef MONEY_H
#define MONEY_H

#include <iostream>
#include <string>

class Money {
private:
    long rubles;
    int kopecks;

public:
    // ������������
    Money();
    Money(long rubles, int kopecks);
    Money(const Money& other);

    // ����������
    ~Money();

    // ��������� (�������)
    long getRubles() const;
    int getKopecks() const;

    // ������������ (�������)
    void setRubles(long rubles);
    void setKopecks(int kopecks);

    // ���������� ��������� ������������
    Money& operator=(const Money& other);

    // ���������� ���������� �������� � ���������
    Money operator+(const Money& other) const;
    Money operator-(const Money& other) const;

    // ������������� ������� ��� ���������� ���������� �����/������
    friend std::ostream& operator<<(std::ostream& os, const Money& money);
    friend std::istream& operator>>(std::istream& is, Money& money);
    void normalize();
};

#endif

