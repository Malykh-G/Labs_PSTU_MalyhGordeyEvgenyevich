#include <iostream>
#include <clocale>

using namespace std;

int main()
{
    setlocale(LC_ALL, "ru_RU.UTF-8");

    int a = 1, n, s = 0;
    cin >> n;
    for (int i = 1; i <= n; ++i)
    {
        for (int j = i; j <= 2 * i; ++j)
        {
            a = a * j;
        }
        s += a;
        a = 1; 
    }
    cout << "S = " << s;

    return 0;
}