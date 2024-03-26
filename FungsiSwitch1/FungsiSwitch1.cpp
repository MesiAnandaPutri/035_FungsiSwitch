// FungsiSwitch1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

int bilA, bilB;

void input()
{
    cout << "Masukan bilangan pertama = ";
    cin >> bilA;
    cout << "Masukan bilangan kedua = ";
    cin >> bilB;
}
int penjumlahan(int a, int b)
{
    return a + b;
}
int pengurangan(int a, int b)
{
    return a - b;
}
int perkalian(int a, int b)
{
    return a * b;
}
int pembagian(int a, int b)
{
    return a / b;
}

int main()
{
    int pilihan;
    do
    {
        cout << "kalkulator sederhana" << endl;
        cout << "====================" << endl;
        cout << "1. penjumlahan" << endl;
        cout << "2. pengurangan" << endl;
        cout << "3. perkalian" << endl;
        cout << "4. pembagian" << endl;
        cout << "5. keluar" << endl;
        cout << "====================" << endl;
        cout << "masukan menu pilihan : ";
        cin >> pilihan;

    }

}