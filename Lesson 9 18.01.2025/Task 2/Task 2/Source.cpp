#include <iostream>

class Fraction {
private:
    int numerator_;
    int denominator_;

    void simplify() {
        int gcd = calculateGCD(numerator_, denominator_);
        numerator_ /= gcd;
        denominator_ /= gcd;
    }

    int calculateGCD(int a, int b) {
        return b == 0 ? a : calculateGCD(b, a % b);
    }

public:
    Fraction(int numerator, int denominator) {
        numerator_ = numerator;
        denominator_ = denominator;
        if (denominator_ == 0) {
            throw std::invalid_argument("Denominator cannot be zero.");
        }
        simplify();
    }
    friend std::ostream& operator<<(std::ostream& os, const Fraction& fraction) {
        os << fraction.numerator_ << "/" << fraction.denominator_;
        return os;
    }
    void print() const {
        std::cout << numerator_ << "/" << denominator_;
    }

    Fraction operator+(const Fraction& other) const {
        return Fraction(numerator_ * other.denominator_ + other.numerator_ * denominator_,
            denominator_ * other.denominator_);
    }

    Fraction operator-(const Fraction& other) const {
        return Fraction(numerator_ * other.denominator_ - other.numerator_ * denominator_,
            denominator_ * other.denominator_);
    }

    Fraction operator*(const Fraction& other) const {
        return Fraction(numerator_ * other.numerator_,
            denominator_ * other.denominator_);
    }

    Fraction operator/(const Fraction& other) const {
        return Fraction(numerator_ * other.denominator_,
            denominator_ * other.numerator_);
    }

    Fraction operator-() const {
        return Fraction(-numerator_, denominator_);
    }

    Fraction& operator++() {
        numerator_ += denominator_;
        simplify();
        return *this;
    }

    Fraction operator++(int) {
        Fraction temp = *this;
        ++(*this);
        return temp;
    }

    Fraction& operator--() {
        numerator_ -= denominator_;
        simplify();
        return *this;
    }

    Fraction operator--(int) {
        Fraction temp = *this;
        --(*this);
        return temp;
    }
};

int main() {
    setlocale(LC_ALL, "rus");
    int num1, denom1, num2, denom2;

    std::cout << "¬ведите числитель дроби 1: ";
    std::cin >> num1;
    std::cout << "¬ведите знаменатель дроби 1: ";
    std::cin >> denom1;

    std::cout << "¬ведите числитель дроби 2: ";
    std::cin >> num2;
    std::cout << "¬ведите знаменатель дроби 2: ";
    std::cin >> denom2;

    try {
        Fraction f1(num1, denom1);
        Fraction f2(num2, denom2);

        std::cout << f1 << " + " << f2 << " = ";
        (f1 + f2).print();
        std::cout << '\n';

        std::cout << f1 << " - " << f2 << " = ";
        (f1 - f2).print();
        std::cout << '\n';

        std::cout << f1 << " * " << f2 << " = ";
        (f1 * f2).print();
        std::cout << '\n';

        std::cout << f1 << " / " << f2 << " = ";
        (f1 / f2).print();
        std::cout << '\n';

        std::cout << "++" << f1 << " * " << f2 << " = ";
        (++f1 * f2).print();
        std::cout << '\n';

        std::cout << f1 << "-- * " << f2 << " = ";
        (f1-- * f2).print();
        std::cout << '\n';
        std::cout << " «начение дроби 1 = ";
        f1.print();
        std::cout << '\n';

    }
    catch (const std::invalid_argument& e) {
        std::cerr << "ќшибка: " << e.what() << '\n';
    }

    return 0;
}