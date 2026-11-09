#include <iostream>
#include <clocale>
using namespace std;
int main(){
    setlocale(LC_ALL, ".UTF-8");
    const int N = 100;
    int a[N];
    int n, index;
    cout << "Введите размер массива: ";
    cin >> n;
    for (int i = 0; i < n; i++){
        a[i] = rand() % 100;
    }
    cout << "Массив: ";
    for (int i = 0; i < n; ++i){
        cout << a[i] << " ";
    }
    cout << endl;
    int pos = -1;
    for (int i = 0; i < n; i++) {
        if (a[i] == 0) {
            pos = i;
        }
    }
    if (pos != -1) {
        for (int i = pos; i < n - 1; i++) {
            a[i] = a[i + 1];
        }
        n--;
    }
    cout << "Введите индекс элемента (от 0 до " << n - 1 << "): ";
    cin >> index;
    if (index >= 0 && index < n && n < N) {
        for (int i = n; i > index + 1; i--) {
            a[i] = a[i - 1];
        }
        a[index + 1] = 100;
        n++;
    }
    else {
        cout << "Неверный индекс!" << endl;
    }
    cout << "Итоговый массив: ";
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    cout << endl;
}