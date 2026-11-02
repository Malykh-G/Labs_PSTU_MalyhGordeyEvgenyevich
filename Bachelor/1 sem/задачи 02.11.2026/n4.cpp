#include <iostream>
#include <clocale>

using namespace std;

int main()
{
    setlocale(LC_ALL, "ru_RU.UTF-8");

    int n;
    cin >> n;
    for (int i = 1; i <= n; ++i)
    {
        cout << "*";
    }
    cout << endl;
    for (int a = 1; a <= (n - 2); ++a)
    {
        cout << "*";
        for (int b = 1; b <= (n - 2); ++b)
        {
            cout << " ";
        }
        cout << "*" << endl;
    }
    for (int j = 1; j <= n; ++j)
    {
        cout << "*";
    }

    return 0;
}