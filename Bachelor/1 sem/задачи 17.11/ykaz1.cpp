#include <iostream>
#include <clocale>

using namespace std;

int main()
{
    setlocale(LC_ALL, "ru_RU.UTF-8");

    int a = 10;
    int b = 20;
    int& r = a;

    r = b;
    r++;

    cout << a << " " << b << endl;
}