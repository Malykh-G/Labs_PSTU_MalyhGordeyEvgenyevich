#include <iostream>
#include <cstring>
#include <algorithm>
#include <clocale>
using namespace std;
int main(){
    setlocale(LC_ALL, ".UTF-8");
    char s[256];
    cout << "Введите строку не больше 255 символов: ";
    cin.getline(s, 256);
    char letters[256];
    int n = 0;
    for (int i = 0; i < strlen(s); i++)
        if (isalpha((unsigned char)s[i]))
            letters[n++] = s[i];
    sort(letters, letters + n);
    int k = 0;
    for (int i = 0; i < strlen(s); i++)
        if (isalpha((unsigned char)s[i]))
            s[i] = letters[k++];
    cout << "Результат: " << s << endl;
    return 0;
}