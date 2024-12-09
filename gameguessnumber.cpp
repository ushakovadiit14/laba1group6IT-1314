#include <iostream>
#include <ctime>
#include "Header.h"
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    cout << "Правила игры:" << endl;
    cout << "Смысл игры состоит в том, чтобы компьютер заказал число в заданном Вами диапазоне, а Вы попытались его угадать." << endl << 
"1. Запустить код;"<< endl <<
"2. Вводим диапазон, в котором компьютер загадает число ;" << endl <<
"3. Пытаемся угадать заданное число, компьютер будет вам подсказывать;" << endl<<
"4. В конце видим количество Ваших попыток." << endl; // правила игры
    string a, b; int num;
    cout << "Введите начальное значение диапазона для генерирования числа: "; //начало диапазона
    cin >> a;
    cout << "Введите конечное значение диапазона для генерирования числа: "; //конец диапазона
    cin >> b;
    if(nebukvi(a) && nebukvi(b)) 
    {
        int a1, b1, count=1;
       for(int i=0;i<a.size();i++)
       {
          a1 += int(char(a[i]))*count;
          count *= 10;
       }
       count = 1;
       for(int i=0;i<b.size();i++)
       {
          b1 += int(char(b[i]))*count;
          count *= 10;
       }
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
}
