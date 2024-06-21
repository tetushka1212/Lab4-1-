#pragma once
#include <iostream>;
using namespace std;
class Complex
{
private:
    double real;
    double image;
public:
    Complex(double r = 0, double i = 0)
    {
        real = r, image = i;
        cout << "Konstruction..." << endl;
    }
    ~Complex() { cout << "Destruction..." << endl; }

    int GetReal()
    {
        cout << "real part equels: " << real << endl;
        return real;
    }
    int GetImage()
    {
        cout << "image part equels: " << image << endl;
        return image;
    }
    void SetReal(double realValue)
    {
        real = realValue;
    }
    void SetImage(double imageValue)
    {
        image = imageValue;
    }
    void Print()
    {
        if (image >= 0) cout << "Your number: " << real << "+" << image << "i" << endl;
        else cout << "Your number: " << real << image << "i" << endl;
    }
    Complex operator+ (Complex);
    Complex operator- (Complex&);
  /*  Complex operator* (Complex);*/
};

