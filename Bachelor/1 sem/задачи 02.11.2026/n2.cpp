#include <iostream>
#include <clocale>

using namespace std;

int main()
{
    setlocale(LC_ALL, "ru_RU.UTF-8");
    int n;
    cin >> n;
    if (n % 2 == 0)
    {
        cout << "Ошибка";
    }
    else
    {
        for (int i = 1; i <= (n +  1) / 2; ++i)
        {
            for (int j = 1; j <= (n / 2) - (i - 1); ++j)
            {
                cout << " ";
            }
            for (int z = 1; z <= 1 + (i - 1) * 2; ++z)
            {
                cout << "*";
            }
            cout << endl;
        }
    }
    return 0;
}