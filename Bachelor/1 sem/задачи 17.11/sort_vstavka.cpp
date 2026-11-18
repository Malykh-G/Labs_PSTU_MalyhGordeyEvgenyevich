#include <iostream>
#include <clocale>

using namespace std;

// Исправленная функция сортировки
void insert_sort(int* arr, const int& N)
{
    for (int i = 1; i < N; i++)
    {
        for (int j = i; j > 0; j--)
        {
            if (arr[j] < arr[j - 1])
            {
                // Меняем элементы местами
                int temp = arr[j];
                arr[j] = arr[j - 1];
                arr[j - 1] = temp; // ИСПРАВЛЕНО: используем temp, а не arr[j]
            }
            else
            {
                // Оптимизация: если элемент уже на своем месте, 
                // дальше влево идти нет смысла (массив слева уже отсортирован)
                break; 
            }
        }
    }
}

int main() {
    setlocale(LC_ALL, "ru_RU.UTF-8");
    int size;
    cout << "Введите размер массива: ";
    cin >> size;

    // Создаем динамический массив
    int* arr = new int[size];

    cout << "Введите " << size << " элементов массива:\n";
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    // Вывод до сортировки
    cout << "Массив до сортировки: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << "\n";

    // Вызов функции сортировки
    insert_sort(arr, size);

    // Вывод после сортировки
    cout << "Массив после сортировки: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << "\n";

    // Освобождение памяти
    delete[] arr;

    return 0;
}