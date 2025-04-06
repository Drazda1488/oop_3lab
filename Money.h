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
    // Конструкторы
    Money();
    Money(long rubles, int kopecks);
    Money(const Money& other);

    // Деструктор
    ~Money();

    // Селекторы (геттеры)
    long getRubles() const;
    int getKopecks() const;

    // Модификаторы (сеттеры)
    void setRubles(long rubles);
    void setKopecks(int kopecks);

    // Перегрузка оператора присваивания
    Money& operator=(const Money& other);

    // Перегрузка операторов сложения и вычитания
    Money operator+(const Money& other) const;
    Money operator-(const Money& other) const;

    // Дружественные функции для перегрузки операторов ввода/вывода
    friend std::ostream& operator<<(std::ostream& os, const Money& money);
    friend std::istream& operator>>(std::istream& is, Money& money);
    void normalize();
};

#endif

