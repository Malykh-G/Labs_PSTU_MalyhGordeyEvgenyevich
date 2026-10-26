#include <iostream> //подключаем директиву для ввода и вывода
#include <iomanip>
using namespace std; //подключаем стандартное в c++ пространство имён

//вводим функцию, которая получает 2 значения с типом float, вычисляет и выводит результат
void calcul_f(float a, float b){
    cout << "--- float ---" << endl;
    float diff1 = (a - b);
    cout << "diff1: " << diff1 << endl;
    float diff2 = (a - b) * (a - b);
    cout << "diff2: " << diff2 << endl;
    float diff3 = ((a * a) - (2 * a * b));
    cout << "diff3: " << diff3 << endl;
    float diff4 = diff2 - diff3;
    cout << "diff4: " << diff4 << endl;
    
    float diff5 = b * b;
    cout <<"diff5: " << diff5 << endl;
    float result = diff4 / diff5;

    cout << "result = " << result << endl << endl;
}

//вводим функцию, которая получает 2 значения с типом double, вычисляет и выводит результат
void calcul_d(double a, double b){
    cout << "--- double ---" << endl;
    double diff1 = (a - b);
    cout << "diff1: " << diff1 << endl;
    double diff2 = (a - b) * (a - b);
    cout << "diff2: " << diff2 << endl;
    double diff3 = ((a * a) - (2 * a * b));
    cout << "diff3: " << diff3 << endl;
    double diff4 = diff2 - diff3;
    cout << "diff4: " << diff4 << endl;
    
    double diff5 = b * b;
    cout <<"diff5: " << diff5 << endl;
    double result = diff4 / diff5;

    cout << "result = " << result << endl << endl;
}

int main() {
    cout << fixed << setprecision(10);
    cout << "a = 1000" << ", b = 0.0001" << endl;
    calcul_f(1000.0f, 0.0001f); //вызываем функцию для float и вносим в неё исходные данные
    calcul_d(1000.0,  0.0001); //тоже самое делаем и для функции для double

    return 0; //возвращаем 0, если правильно работает программа
}