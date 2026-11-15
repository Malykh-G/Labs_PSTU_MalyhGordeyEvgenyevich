#include <iostream>
#include <clocale>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    setlocale(LC_ALL, ".UTF-8");
    srand(time(NULL));
    const int N = 100;
    int a[N];
    int n, index;
    cout << "Введите размер массива: ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        a[i] = rand() % 15;
    }
    cout << "Массив: ";
    for (int i = 0; i < n; ++i)
    {
        cout << a[i] << " ";
    }
    cout << endl;
    int a_min = 1000;
    for (int i = 0; i < n; ++i)
    {
        if (a[i] < a_min)
        {
            a_min = a[i];
        }
    }
    for (int i = 0; i < n; ++i)
    {
        if (a[i] == a_min)
        {
            for(int j = i; j < n - 1; ++j)
            {
                a[j] = a[j+1];
            }
            n--;
            i--;
        }
    }
    int sum = 0;
    for (int i = 0; i < n; ++i)
    {
        sum += a[i];
    }
    int s_arfm = sum / n;
    for (int i = 0; i < 3; ++i)
    {
        for (int j = n - 1; j >= i; --j)
        {
            a[j+1] = a[j];
        }
        a[i] = s_arfm;
        ++n;
    }
    cout << "Новый массив: ";
    for (int i = 0; i < n; ++i)
    {
        cout << a[i] << " ";
    }

    return 0;
}