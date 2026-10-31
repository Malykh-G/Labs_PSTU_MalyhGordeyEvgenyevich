#include <iostream>
#include <clocale>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
    setlocale(LC_ALL, "ru_RU.UTF-8");
    // Дано:
    double a = 0.2;
    double b = 1.0;
    int n = 10;
    double accuracy = 0.0001;
    int step = 10;

    double h = (b - a) / step;

    // Заголовок таблицы
    cout << "Вычисление функции y = 0.5 * ln(x)" << endl;
    cout << string(60,'-') << endl;
    cout << "X\tSN\tSE\tY" << endl;
    cout << string(60,'-') << endl;

    // Внеш. цикл для изменения x
    for (double x = a; x <= 1; x += h) {
        
        // Точное значение функции
        double y = 0.5 * log(x);

        // Вычисляем z
        double z = (x - 1.0) / (x + 1.0);
        double z_sqr = z * z;

        // a) Сумма для заданного n
        double SN = 0.0;
        double term = z; // Первый член ряда (при k = 0)

        // Цикл суммирования (n слагаемых)
        for (int i = 0; i < n; ++i){
            SN += term;
            term *= z_sqr * (2 * i + 1) / (2 * i + 3);
        }

        // b) Сумма для заданной точности
        double SE = 0.0;
        term = z;
        int i = 0;

        // Итерационный цикл
        while (abs(term) >= accuracy) {
            SE += term;
            term *= z_sqr * (2 * i + 1) / (2 * i + 3);
            i++;
        }

        // Вывод результатов
        cout << fixed << setprecision(4) << x << "\t" << SN << "\t" << SE << "\t" << y << endl;
    }
    return 0;
}