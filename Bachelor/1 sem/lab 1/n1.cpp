#include <iostream> //подключаем директиву для ввода и вывода
using namespace std; //подключаем стандартное в c++ пространство имён

//вводим функцию, которая получает 2 значения с типом float, вычисляет и выводит результат
void calcul_f(float a, float b){
    float diff1 = (a - b) * (a - b);
    float diff2 = a * a - 2 * a * b;
    float result = (diff1 - diff2) / (b * b);

    cout << "--- float ---" << endl;
    cout << "result = " << result << endl;
}

//вводим функцию, которая получает 2 значения с типом double, вычисляет и выводит результат
void calcul_d(double a, double b){
    double diff1 = (a - b) * (a - b);
    double diff2 = a * a - 2 * a * b;
    double result = (diff1 - diff2) / (b * b);

    cout << "--- double ---" << endl;
    cout << "result = " << result << endl;
}

int main() {
    cout << "a = 1000" << ", b = 0.0001" << endl;
    calcul_f(1000.0f, 0.0001f); //вызываем функцию для float и вносим в неё исходные данные
    calcul_d(1000.0,  0.0001); //тоже самое делаем и для функции для double

    return 0; //возвращаем 0, если правильно работает программа
}