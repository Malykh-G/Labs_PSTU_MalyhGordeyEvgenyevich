#include <iostream>
#include <cstdlib> // Для rand() и srand()
#include <ctime>   // Для time()
#include <clocale>

using namespace std;

int main() {
    setlocale(LC_ALL, "ru_RU.UTF-8");
    // Инициализация генератора случайных чисел
    srand(time(0));
    // 1. Запрос размера массива
    int size;
    cout << "Введите размер массива: ";
    cin >> size;
    // 2. Создание динамического массива
    int* arr = new int[size];
    // 3. Заполнение массива случайными числами
    for(int i = 0; i < size; i++) {
        arr[i] = rand() % 100 + 1; // числа от 1 до 100
    }
    // 4. Вывод массива
    cout << "Создан массив: ";
    for(int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    // 5. Подсчет суммы элементов
    int sum = 0;
    for(int i = 0; i < size; i++) {
        sum += arr[i];
    }
    cout << "Сумма элементов: " << sum << endl;
    // 6. Освобождение памяти
    delete[] arr;

    return 0;
}