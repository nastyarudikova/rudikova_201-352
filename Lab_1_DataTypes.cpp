

#include <iostream>
#include <limits.h>
#include <bitset>
#include<float.h>

using std::cout;
using std::cin;
using std::endl;
using std::bitset;
using std::hex;

int main()
{
    //Задание №1

    cout << "Rudikova Anastasia Urievna, 201-352 \n" << endl;

    //Задание №2

    cout << "Min int =" << INT_MIN << ", Max_int = " << INT_MAX << ". Size of int = " << sizeof(int) << endl;
    cout << "Min unsigned int = 0" << ", Max unsigned int = " << UINT_MAX << ". Size of unsigned int = " << sizeof(unsigned) << endl;
    cout << "Min short = " << SHRT_MIN << ", Max short = " << SHRT_MAX << ". Size of short int = " << sizeof(short) << endl;
    cout << "Min unsigned short = 0" << ", Max unsigned short = " << USHRT_MAX << ". Size of unsigned short int = " << sizeof(unsigned short) << endl;
    cout << "Min long long = " << LLONG_MIN << ", Max long long= " << LLONG_MAX << ". Size of long long = " << sizeof(long long) << endl;
    cout << "Min double = " << DBL_MIN << ", Max double = " << DBL_MAX << ". Size of double = " << sizeof(double) << endl;
    cout << "Min char = " << CHAR_MIN << ", Max char = " << CHAR_MAX << ". Size of char = " << sizeof(char) << endl;
    cout << "Min bool = 0" << ", Max bool = 1" << ". Size of bool = " << sizeof(bool) << endl;

    //Задание №3

    int number;
    cout << "\nEnter number: ";
    cin >> number;
    cout << "Binary: " << bitset<16>(number) << endl;
    cout << "Hex: " << hex << number << endl;
    cout << "Boolean: " << bool(number) << endl;
    cout << "Char: " << char(number) << endl;

    //Задание №4

    float a;
    float b;
    cout << "\nEnter coeff a * x = b" << endl;
    cout << "a: ";
    cin >> a;
    cout << "b: ";
    cin >> b;
    cout << a << "*x = " << b << endl;
    cout << "x = " << b << "/" << a << endl;
    cout << "x = " << b / a << endl;

    //Задание №5

    float x1;
    float x2;
    cout << "\nEnter the coordinates of the line segment: " << endl;
    cout << "x1: ";
    cin >> x1;
    cout << "x2: ";
    cin >> x2;
    cout << "Average = " << (x1 + x2) / 2 << endl;
    return 0;

}
