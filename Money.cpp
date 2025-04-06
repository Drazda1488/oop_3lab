// Money.cpp
#include "Money.h"

using namespace std;

Money::Money() : rubles(0), kopecks(0) {}

Money::Money(long rubles, int kopecks) : rubles(rubles), kopecks(kopecks) {
    normalize(); // Функция для приведения копеек к рублям, если нужно
}

Money::Money(const Money& other) : rubles(other.rubles), kopecks(other.kopecks) {}

Money::~Money() {}

long Money::getRubles() const {
    return rubles;
}

int Money::getKopecks() const {
    return kopecks;
}

void Money::setRubles(long rubles) {
    this->rubles = rubles;
}

void Money::setKopecks(int kopecks) {
    this->kopecks = kopecks;
    normalize(); // При изменении копеек, нужно нормализовать
}

Money& Money::operator=(const Money& other) {
    if (this != &other) {
        rubles = other.rubles;
        kopecks = other.kopecks;
    }
    return *this;
}

Money Money::operator+(const Money& other) const {
    Money result(rubles + other.rubles, kopecks + other.kopecks);
    result.normalize();
    return result;
}

Money Money::operator-(const Money& other) const {
    Money result(rubles - other.rubles, kopecks - other.kopecks);
    result.normalize();
    return result;
}

ostream& operator<<(ostream& os, const Money& money) {
    os << money.rubles << "," << (money.kopecks < 10 ? "0" : "") << money.kopecks;
    return os;
}

istream& operator>>(istream& is, Money& money) {
    cout << "Введите рубли: ";
    is >> money.rubles;
    cout << "Введите копейки: ";
    is >> money.kopecks;
    money.normalize();
    return is;
}

void Money::normalize() {
    rubles += kopecks / 100;
    kopecks %= 100;
    if (kopecks < 0) {
        rubles--;
        kopecks += 100;
    }
}

