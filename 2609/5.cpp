#include <iostream>
using namespace std;

struct Fraction {
    int numerator;
    int denominator;
};

int gcd(int a, int b) {
    while (b != 0) {
        int t = b;
        b = a % b;
        a = t;
    }
    return a;
}

Fraction add(Fraction a, Fraction b) {
    Fraction result;
    result.numerator = a.numerator * b.denominator + b.numerator * a.denominator;
    result.denominator = a.denominator * b.denominator;
    int g = gcd(result.numerator, result.denominator);
    result.numerator /= g;
    result.denominator /= g;
    return result;
}

Fraction subtract(Fraction a, Fraction b) {
    Fraction result;
    result.numerator = a.numerator * b.denominator - b.numerator * a.denominator;
    result.denominator = a.denominator * b.denominator;
    int g = gcd(result.numerator, result.denominator);
    result.numerator /= g;
    result.denominator /= g;
    return result;
}

Fraction multiply(Fraction a, Fraction b) {
    Fraction result;
    result.numerator = a.numerator * b.numerator;
    result.denominator = a.denominator * b.denominator;
    int g = gcd(result.numerator, result.denominator);
    result.numerator /= g;
    result.denominator /= g;
    return result;
}

Fraction divide(Fraction a, Fraction b) {
    Fraction result;
    result.numerator = a.numerator * b.denominator;
    result.denominator = a.denominator * b.numerator;
    int g = gcd(result.numerator, result.denominator);
    result.numerator /= g;
    result.denominator /= g;
    return result;
}

void printFraction(Fraction f) {
    cout << f.numerator << "/" << f.denominator << endl;
}

int main() {
    Fraction f1 = { 1, 2 };
    Fraction f2 = { 3, 4 };

    Fraction result = add(f1, f2);
    cout << "Сложение: ";
    printFraction(result);

    result = subtract(f1, f2);
    cout << "Вычитание: ";
    printFraction(result);

    result = multiply(f1, f2);
    cout << "Умножение: ";
    printFraction(result);

    result = divide(f1, f2);
    cout << "Деление: ";
    printFraction(result);

    return 0;
}
