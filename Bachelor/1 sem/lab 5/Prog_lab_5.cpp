#include <iostream>
#include <clocale>
using namespace std;
const int N = 100;

void change(int a[][N], int n, int row, int col) {
    for (int j = 0; j < n; j++) {
        swap(a[row][j], a[j][col]);
    }
}

int main() {
    setlocale(LC_ALL, ".utf-8");
    int a[N][N];
    int n;
    cout << "Введите размер квадратной матрицы: ";
    cin >> n;
    cout << "Введите элементы матрицы: " << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> a[i][j];
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (a[i][0] == a[0][j]) {
                change(a, n, i, j);
            }
        }
    }
    cout << "Результат: " << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}