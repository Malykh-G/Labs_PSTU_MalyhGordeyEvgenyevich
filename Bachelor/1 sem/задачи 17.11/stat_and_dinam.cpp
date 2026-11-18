#include <iostream>
#include <clocale>

using namespace std;

int main() {
    setlocale(LC_ALL, "ru_RU.UTF-8");
    cout << "=== 1. СТАТИЧЕСКИЙ МАССИВ ===" << endl;
    // Размер статического массива должен быть известен ДО запуска программы.
    // Мы не можем написать: int size; cin >> size; int staticArr[size]; (это ошибка в стандартном C++)
    
    const int STATIC_SIZE = 5; // Размер жестко задан в коде
    int staticArr[STATIC_SIZE]; 
    
    cout << "Введите 5 элементов (размер жестко задан в коде):\n";
    for (int i = 0; i < STATIC_SIZE; i++) {
        cin >> staticArr[i];
    }
    
    cout << "Вы ввели: ";
    for (int i = 0; i < STATIC_SIZE; i++) {
        cout << staticArr[i] << " ";
    }
    cout << "\n\n";


    cout << "=== 2. ДИНАМИЧЕСКИЙ МАССИВ ===" << endl;
    int size;
    cout << "Введите размер массива (например, 3 или 10): ";
    cin >> size;
    
    // Создаем массив ТОЧНО ТАКОГО размера, какой ввел пользователь!
    // Это выделяет память в куче (heap).
    int* dynamicArr = new int[size]; 
    
    cout << "Введите " << size << " элементов:\n";
    for (int i = 0; i < size; i++) {
        cin >> dynamicArr[i];
    }
    
    cout << "Вы ввели: ";
    for (int i = 0; i < size; i++) {
        cout << dynamicArr[i] << " ";
    }
    cout << endl;
    
    // ВАЖНО: Динамическую память нужно обязательно освобождать вручную!
    // Иначе возникнет утечка памяти (memory leak).
    delete[] dynamicArr;
    cout << "Память освобождена." << endl;

    return 0;
}