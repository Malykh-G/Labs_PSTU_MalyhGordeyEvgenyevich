#include <iostream>
#include <clocale>

using namespace std;

// Функция сортировки выбором
void selection_sort(int* arr, const int& N)
{
    for (int i = 0; i < N - 1; i++)
    {
        int min = i; // Предполагаем, что минимальный элемент - первый в неотсортированной части
        
        // Ищем реальный минимальный элемент в оставшейся части массива
        for (int j = i + 1; j < N; j++)
        {
            if (arr[min] > arr[j])
            {
                min = j; // Запоминаем индекс нового минимума
            }
        }
        
        // Если нашли элемент меньше, чем текущий arr[i], меняем их местами
        if (min != i)
        {
            int temp = arr[i];
            arr[i] = arr[min];
            arr[min] = temp;
        }
    }
}

int main() {
    // Универсальная настройка локали (подхватит язык системы)
    setlocale(LC_ALL, "ru_RU.UTF-8");
    
    int size;
    cout << "Введите размер массива: ";
    cin >> size;

    // Проверка на корректность размера
    if (size <= 0) {
        cout << "Ошибка: размер массива должен быть больше нуля!" << endl;
        return 1;
    }

    // Создаем динамический массив
    int* arr = new int[size];

    cout << "Введите " << size << " элементов массива:\n";
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    // Вывод до сортировки
    cout << "Массив до сортировки:    ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << "\n";

    // Вызов функции сортировки
    selection_sort(arr, size);

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