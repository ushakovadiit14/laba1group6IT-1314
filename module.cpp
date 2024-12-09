#include <iostream>
#include <ctime>
#include <string>
using namespace std;

int randomnum(int a, int b)
{
    srand((time(0)));
    int random_number = rand() % (b - a + 1) + a; // создание случайного числа в заданном диапазоне 
    return random_number;
}

bool nebukvi(const string& input) {
    for (int i = 0; i < input.size(); i++) {
        if (int(input[i]) > 57 || (int(input[i]) < 48 && int(input[i]) != 45))
        {
            return false;
        }
    }
    return true;
}

void game(int num)
{
    string guess; int count = 1;
    cout << "Введите предполагаемое число: ";
    cin >> guess;
    while (!nebukvi(guess))
    {
        cout << "Ошибка: Ввод должен содержать только цифры." << endl;
        cout << "Пожалуйста, введите число(((: "; cin >> guess;
    }
    int guess1 = stoi(guess);
    while (guess != to_string(num))
    {
        while (!nebukvi(guess))
        {
            cout << "Ошибка: Ввод должен содержать только цифры." << endl;
            cout << "Пожалуйста, введите число(((: "; cin >> guess;
        }
        int guess1 = stoi(guess);
        if (guess1 < num)
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
    if (guess == to_string(num))     //если загаданное число совпадает с введенным, то выводится победная фраза и количество попыток
    {
        cout << "Вы выиграли!!!" << endl;
        cout << "Количество попыток: " << count;
    }
}
