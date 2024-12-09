#include <iostream>
#include <ctime>
#include <string>
#include "Header.h"
using namespace std;

int main() {
    srand(time(0));
    setlocale(LC_ALL, "RU");
    cout << "Правила игры:" << endl;
    cout << "Смысл игры состоит в том, чтобы компьютер заказал число в заданном Вами диапазоне, а Вы попытались его угадать." << endl <<
        "1. Запустить код;" << endl <<
        "2. Вводим диапазон, в котором компьютер загадает число ;" << endl <<
        "3. Пытаемся угадать заданное число, компьютер будет вам подсказывать;" << endl <<
        "4. В конце видим количество Ваших попыток." << endl; // правила игры
    string a, b; int num;
    cout << "Введите начальное значение диапазона для генерирования числа: "; //начало диапазона
    cin >> a;
    while (!nebukvi(a))
    {
        cout << "Ошибка: Ввод должен содержать только цифры." << endl;
        cout << "Пожалуйста, введите корректное начальное значение диапазона для генерирования числа: "; cin >> a;
    }
    cout << "Введите конечное значение диапазона для генерирования числа: "; //конец диапазона
    cin >> b;
    while (!nebukvi(b))
    {
        cout << "Ошибка: Ввод должен содержать только цифры." << endl;
        cout << "Пожалуйста, введите корректное конечное значение диапазона для генерирования числа: "; cin >> b;
    }
    int a1 = stoi(a), b1 = stoi(b);
    if (b1 < a1) {
        int c;
        c = a1;
        a1 = b1;
        b1 = c;
    }
    num = randomnum(a1, b1);
    game(num);
    return 0;
}
