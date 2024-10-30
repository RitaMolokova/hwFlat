#include <iostream>
using namespace std;

class Flat
{
    int price;
    double S;
public:
    Flat() : price(0), S(0) {}
    Flat(int pr, double s) : price(pr), S(s) {}

    void Print() {
        cout << "Price: " << price << endl;
        cout << "S: " << S << endl;
    }
    bool operator==(Flat& b) {
        return S == b.S;
    }
    Flat& operator=(Flat& b) {
        if (this != &b) {
            price = b.price;
            S = b.S;
        }
        return *this;
    }
    bool operator>(Flat& b) {
        return price > b.price;
    }
};

int main() {
    Flat flat1(3200, 50.0);
    Flat flat2(6000, 55.2);
    Flat flat3(8000, 58.8);

    flat1.Print();
    flat2.Print();

    if (flat1 == flat2) {
        cout << "flat1 == flat2" << endl;
    }
    else {
        cout << "flat1 != flat2" << endl;
    }

    if (flat1 > flat2) {
        cout << "flat1 > flat2" << endl;
    }
    else {
        cout << "flat1 < flat2" << endl;
    }
    flat3 = flat1;
    flat3.Print();

    return 0;
}
