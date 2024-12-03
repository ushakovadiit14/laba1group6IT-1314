#include <iostream>
#include <ctime>
using namespace std;

int randomnum(int a, int b)
{
    srand((time(0)));
    int random_number = rand() % (b  - a + 1) + a; // создание случайного числа в заданном диапазоне 
    return random_number;
}

void game(int num)
{
    int guess, count = 1;
    cout << "";
    cin >> guess;
    while (guess != num)
    {
        if (guess < num)
        {
            cout << "больше" << endl;
        }
        else
        {
            cout << "меньше" << endl;
        }
        count++;
        cin >> guess;
    }
    if (guess == num)     //если загаданное число совпадает с введенным, то выводится победная фраза и количество попыток
    {
        cout << "" << endl;
        cout << "" << count;
    }
}
