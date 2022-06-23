#include <Windows.h>
#include <iostream>
#include <string>

using namespace std;

// К ЗАДАНИЮ 5
void numberOne() {
    int a = 1;
    int summa = 0;

    cout << endl;
    cout << " Таблица умножения на 1\n";
    cout << endl;
    for (int i = 0; i <= 9; i++) {
        summa = a * i;
        cout << "    ";
        cout << i << " x " << a << " = " << summa << endl;
    }
    cout << endl;
    cout << " Для продолжения введите цифру от 1 до 9: ";

}
void numberTwo() {
    int a = 2;
    int summa = 0;

    cout << endl;
    cout << " Таблица умножения на 2\n";
    cout << endl;
    for (int i = 0; i <= 9; i++) {
        summa = a * i;
        cout << "    ";
        cout << i << " x " << a << " = " << summa << endl;
    }
    cout << endl;
    cout << " Для продолжения введите цифру от 1 до 9: ";
}
void numberThree() {
    int a = 3;
    int summa = 0;

    cout << endl;
    cout << " Таблица умножения на 3\n";
    cout << endl;
    for (int i = 0; i <= 9; i++) {
        summa = a * i;
        cout << "    ";
        cout << i << " x " << a << " = " << summa << endl;
    }
    cout << endl;
    cout << " Для продолжения введите цифру от 1 до 9: ";
}
void numberFour() {
    int a = 4;
    int summa = 0;

    cout << endl;
    cout << " Таблица умножения на 4\n";
    cout << endl;
    for (int i = 0; i <= 9; i++) {
        summa = a * i;
        cout << "    ";
        cout << i << " x " << a << " = " << summa << endl;
    }
    cout << endl;
    cout << " Для продолжения введите цифру от 1 до 9: ";
}
void numberFife() {
    int a = 5;
    int summa = 0;

    cout << endl;
    cout << " Таблица умножения на 5\n";
    cout << endl;
    for (int i = 0; i <= 9; i++) {
        summa = a * i;
        cout << "    ";
        cout << i << " x " << a << " = " << summa << endl;
    }
    cout << endl;
    cout << " Для продолжения введите цифру от 1 до 9: ";
}
void numberSix() {
    int a = 6;
    int summa = 0;

    cout << endl;
    cout << " Таблица умножения на 6\n";
    cout << endl;
    for (int i = 0; i <= 9; i++) {
        summa = a * i;
        cout << "    ";
        cout << i << " x " << a << " = " << summa << endl;
    }
    cout << endl;
    cout << " Для продолжения введите цифру от 1 до 9: ";
}
void numberSeven() {
    int a = 7;
    int summa = 0;

    cout << endl;
    cout << " Таблица умножения на 7\n";
    cout << endl;
    for (int i = 0; i <= 9; i++) {
        summa = a * i;
        cout << "    ";
        cout << i << " x " << a << " = " << summa << endl;
    }
    cout << endl;
    cout << " Для продолжения введите цифру от 1 до 9: ";
}
void numberEight() {
    int a = 8;
    int summa = 0;

    cout << endl;
    cout << " Таблица умножения на 8\n";
    cout << endl;
    for (int i = 0; i <= 9; i++) {
        summa = a * i;
        cout << "    ";
        cout << i << " x " << a << " = " << summa << endl;
    }
    cout << endl;
    cout << " Для продолжения введите цифру от 1 до 9: ";
}
void numberNine() {
    int a = 9;
    int summa = 0;

    cout << endl;
    cout << " Таблица умножения на 9\n";
    cout << endl;
    for (int i = 0; i <= 9; i++) {
        summa = a * i;
        cout << "    ";
        cout << i << " x " << a << " = " << summa << endl;
    }
    cout << endl;
    cout << " Для продолжения введите цифру от 1 до 9: ";
}

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    // ЗАДАНИЕ 1
    /*
      cout << " Задание 1" << endl;
    int a, summa = 0;
    string name = " Введите любое число: ";
    cout << name;
    cin >> a;

    for (int i = a; i <= 500; i++) {
        summa = summa + a;
        cout << summa << endl;

    }
    cout << endl;
    */

    // ЗАДАНИЕ 2
    /*
     cout << " Задание 2" << endl;
    string nameX = " Введите значение X: ";
    string nameY = " Введите значение Y: ";
    int x, y, i;
    float s = 1;
    cout << nameX;
    cin >> x;
    cout << nameY;
    cin >> y;

    if (y == 0) {
        s = 1;
    }
    else {
        i = 1;

        while (i<=abs(y))
        {
            s = s * x;
            i = i + 1;
        }
        if (y < 0) {
            s = 1 / s;
        }
    }
    cout << " " << s << endl;
    */

    // ЗАДАНИЕ 3
    /*
     cout << " Задание 3" << endl;

    float sum = 0;
    int i;
    int a = 1000;

    for (i = 0; i <= a; i++) {
        sum += i;
    }
    sum /= a;
    cout << sum;
    */

    // ЗАДАНИЕ 4
    /*
      cout << " Задание 4" << endl;
    int a;
    long  long sum = 1;
    cout << " Введите число: ";
    cin >> a;
    for (int i = a; i <= 20; i++) {
        sum *= i;
    }
    cout << sum << endl;
    */

    // ЗАДАНИЕ 5
    /*
      cout << " Задание 5" << endl;
    int k = 0;

    cout << " Введите цифру от 1 до 9: ";


    do {
        cin >> k;

        switch (k)
        {
        case 1:
            numberOne();
            break;
        case 2:
            numberTwo();
            break;
        case 3:
            numberThree();
            break;
        case 4:
            numberFour();
            break;
        case 5:
            numberFife();
            break;
        case 6:
            numberSix();
            break;
        case 7:
            numberSeven();
            break;
        case 8:
            numberEight();
            break;
        case 9:
            numberNine();
            break;
        default:
            cout << " Введено неверноне значение. Попробуйте ещё раз\n";
            break;
        }

    } while (true);

    */

}
