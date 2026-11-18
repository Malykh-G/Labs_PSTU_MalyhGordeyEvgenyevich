#include <iostream>
#include <clocale>

using namespace std;

// Функция сортировки пузырьком
void bubble_sort(int* arr, const int& N)
{
    for (int i = 0; i < N; i++)
    {
        // N - i - 1, потому что после каждого прохода 
        // самый большой элемент "всплывает" в конец, 
        // и его уже не нужно проверять.
        for (int j = 0; j < N - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                // Меняем соседние элементы местами
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    // Универсальная настройка локали
    setlocale(LC_ALL, "ru_RU.UTF-8"); 
    
    int size;
    cout << "Введите размер массива: ";
    cin >> size;

    // Проверка на корректность
    if (size <= 0) {
        cout << "Ошибка: размер массива должен быть больше нуля!" << endl;
        return 1;
    }

    int* arr = new int[size];

    cout << "Введите " << size << " элементов массива:\n";
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    cout << "Массив до сортировки:    ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << "\n";

    // Вызов функции
    bubble_sort(arr, size);

    cout << "Массив после сортировки: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << "\n";

    delete[] arr;

    return 0;
}