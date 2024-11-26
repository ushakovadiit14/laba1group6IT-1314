#include <iostream>
#include <ctime>
using namespace std;

int randomnum(int a, int b)
{
    srand((time(0))); 
    int random_number = rand() % a + (b-a); // создание случайного числа в заданном диапазоне 
    return random_number;
}

int main(){
    cout << ""; // правила игры
    int a, b, num;
    cout << "Введите начальное значение диапазона для генерирования числа: "; //начало диапазона
    cin >> a;
    cout << "Введите конечное значение диапазона для генерирования числа: "; //конец диапазона
    cin >> b;
    if (b < a) {
        int c;
        c = a;
        a = b;
        b = c;
    }
    
    
}
