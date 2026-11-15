#include <iostream>
#include <clocale>
#include <iomanip>

using namespace std;

const int N = 20;
const int M = 20;

int getsum(int matrix[][M], int n, int startCol, int endCol)
{
    int sum = 0;
    for (int i = 0; i < n; ++i)
    {
        for (int j = startCol; j <= endCol; ++j)
        {
            sum += matrix[i][j];
        }
    }
    return sum;
}

int findSplit(int matrix[][M], int n, int m)
{
    for (int k = 1; k < m - 1; ++k)
    {
        int leftsum = getsum(matrix, n, 0, k - 1);
        int rightsum = getsum(matrix, n, k + 1, m - 1);
        if (leftsum > rightsum)
        {
            return k;
        }
    }
    return -1;
}
int main()
{
    setlocale(LC_ALL, ".utf-8");
    int n, m;
    int matrix[N][M];

    cout << "Введите кол-во строк: ";
    cin >> n;
    cout << endl << "Введите кол-во столбцов: ";
    cin >> m;
    cout << "Введите элементы матрицы: " << endl;
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < m; ++j)
        {
            cin >> matrix[i][j];
        }
    }
    cout << "Ваша матрица:" << endl;
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < m; ++j)
        {
            cout << setw(4) << matrix[i][j] << " ";
        }
        cout << endl;
    
    }
    int result = findSplit(matrix, n, m);
    
    cout << endl;
    if (result != -1) {
        cout << "Найден подходящий столбец: " << result << " (индексация с 0)" << endl;
        cout << "Сумма слева: " << getsum(matrix, n, 0, result - 1) << endl;
        cout << "Сумма справа: " << getsum(matrix, n, result + 1, m - 1) << endl;
    } else {
        cout << "Подходящий столбец не найден." << endl;
    }
    return 0;
}