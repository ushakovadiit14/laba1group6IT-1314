#include <iostream>
#include <ctime>
using namespace std;

int randomnum(int a, int b)
{
    srand((time(0))); 
    int random_number = rand() % a + (b-a); // создание случайного числа в заданном диапазоне 
    return random_number;
}

int game(int num)
{
    int guess, count;
    cout << "";
    cin >> guess;
    count++;
    if (guess == num)     //если загаданное число совпадает с введенным, то выводится победная фраза и количество попыток
    {
        cout << "" << endl;
        cout << "" << count;
    }
    else    //проверки на то, больше или меньше ли введенное число по сравнению с загаданным.
    {
        if (guess < num)
        {
            cout << "" << endl;
        }
        else
        {
            cout << "" << endl;
        }
    }
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
