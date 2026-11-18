#include <iostream>
#include <clocale>

using namespace std;

int main()
{
    setlocale(LC_ALL, "ru_RU.UTF-8");

    int a = 12;
    int* ptr = &a;
    int copy = *ptr;

    (*ptr)++;
    cout << a << " " << copy << endl;
}