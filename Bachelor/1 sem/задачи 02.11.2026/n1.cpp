#include <iostream>
#include <clocale>

using namespace std;

int main()
{
    setlocale(LC_ALL, "ru_RU.UTF-8");
    int a, b;
    bool f = true;
    cin >> a;
    if ( a == 0)
    {
        cout << "Последовательность нулевая";
    }
    else
    {
        cin >> b;
        while ( (a != b) && f && (b != 0) )
        {
            if (a < b)
            {
                a = b;
                cin >> b;
            }
            else
            {
                f = false;
            }
        }
        if (f)
        {
            cout << "Последовательность возрастающая";
        }
        else
        {
            cout << "Последовательность невозрастающая";
        }
    }
    return 0;
}