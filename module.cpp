#include <iostream>
#include <ctime>
using namespace std;

int randomnum(int a, int b)
{
    srand((time(0)));
    int random_number = rand() % (b  - a + 1) + a; // создание случайного числа в заданном диапазоне 
    return random_number;
}

bool nebukvi (const string &input) {
    for (char ch : input) {
        if (!isdigit(ch)) { // Проверяем, является ли символ цифрой
            cout << "Ошибка: Ввод должен содержать только цифры." << endl;
            return false;
        }
    }
    return true;
}

void game(int num)
{
    int guess, count = 1;
    cout << "Введите предполагаемое число: ";
    cin >> guess;
    while (guess != num)
    {
        if (guess < num)
        {
            cout << "Загаданное число больше.Попробуйте ещё раз." << endl;
        }
        else
        {
            cout << "Загаданное число меньше.Попробуйте ещё раз." << endl;
        }
        count++;
        cin >> guess;
    }
    if (guess == num)     //если загаданное число совпадает с введенным, то выводится победная фраза и количество попыток
    {
        cout << "Вы выиграли!!!" << endl;
        cout << "Количество попыток: " << count;
    }
}
