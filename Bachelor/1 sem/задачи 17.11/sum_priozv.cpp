#include <iostream>
#include <clocale>

using namespace std;

int main()
{
    setlocale(LC_ALL, "ru_RU.UTF-8");

    int n;
    cout << "Введите n: ";
    cin >> n;

    long long sum = 0; // Переменная для общей суммы

    // Внешний цикл: отвечает за суммирование членов ряда
    for (int i = 1; i <= n; i++)
    {
        long long product = 1; // Переменная для текущего произведения

        // Внутренний цикл: отвечает за умножение от i до 2*i
        for (int j = i; j <= 2 * i; j++)
        {
            product *= j;
        }

        // Добавляем полученное произведение к общей сумме
        sum += product;
    }

    cout << "Сумма произведений: " << sum << endl;
}