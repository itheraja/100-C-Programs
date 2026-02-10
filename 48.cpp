#include <iostream>
using namespace std;

class Complex {
public:
    int real, imag;

    Complex(int r = 0, int i = 0) {
        real = r;
        imag = i;
    }

    friend ostream& operator<<(ostream &out, const Complex &c);
    friend istream& operator>>(istream &in, Complex &c);
};

ostream& operator<<(ostream &out, const Complex &c) {
    out << c.real << " + " << c.imag << "i";
    return out;
}

istream& operator>>(istream &in, Complex &c) {
    cout << "Enter real and imag: ";
    in >> c.real >> c.imag;
    return in;
}

int main() {
    Complex c;
    cin >> c;
    cout << c;
    return 0;
}
