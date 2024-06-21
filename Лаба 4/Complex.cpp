#include "Complex.h"

Complex Complex::operator+(Complex num2)
{
    /* 
        num2.real+= real;
        num2.image+= image   тут меняется само второе число */
    Complex sum(num2.real + real, num2.image + image); // a тут наоборот, число не меняется, но создаётся доп.экземпляр
    
    return sum;
}

Complex Complex::operator-(Complex& num2)
{
    /*
        num2.real-= real;
        num2.image-= image    */
    Complex diff(num2.real - real, num2.image - image);
    return diff;
}

//Complex Complex::operator*(Complex num2)
//{
//    return Complex();
//}
