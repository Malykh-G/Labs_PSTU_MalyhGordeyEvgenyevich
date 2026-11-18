#include <iostream>
#include <clocale>

using namespace std;

int main()
{
    setlocale(LC_ALL, "ru_RU.UTF-8");

    int n;
    cout << "Введите основание треугольника (нечетное число): ";
    cin >> n;

    // Внешний цикл: перебирает строки сверху вниз
    for (int i = 1; i <= (n + 1)/2; ++i)
    {
        for (int j = 1; j <= n / 2 - (i - 1); ++j)
        {
            cout << ' ';
        }
        for (int j = 1; j <= 1 + (i - 1) * 2; ++j)
        {
            cout << '*';
        }
        cout << endl;
    }
}
