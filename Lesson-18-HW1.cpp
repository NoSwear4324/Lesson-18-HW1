#include <iostream>
#include <windows.h>
#include <cstdlib>
#include <ctime>
#include <cstdio>
#include "Employee.h"
using namespace std;

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    setlocale(0, "");

    // 1. Объявление и заполнение массива работников
    Employee employees[5] = {
        {"Іванов", 1955, "Інженер", 15000.0, "Вища"},
        {"Петренко", 1970, "Бухгалтер", 12000.0, "Вища"},
        {"Сидоренко", 1985, "Менеджер", 10000.0, "Середня"},
        {"Коваленко", 1960, "Охоронець", 8000.0, "Середня"},
        {"Мельник", 1995, "Програміст", 20000.0, "Вища"}
    };

    // 2. Вывод всех работников
    cout << "Всі працівники:" << endl;
    for (int i = 0; i < 5; ++i) {
        cout << "Прізвище: " << employees[i].surname << endl;
        cout << "Рік народження: " << employees[i].birthYear << endl;
        cout << "Посада: " << employees[i].position << endl;
        cout << "Зарплата: " << employees[i].salary << endl;
        cout << "Освіта: " << employees[i].education << endl;
        cout << "------------------------" << endl;
    }

    // 3. Поиск и вывод работников старше 60 лет
    int currentYear = 2025;
    cout << "\nПрацівники старші за 60 років:" << endl;
    int count = 0;
    for (int i = 0; i < 5; ++i) {
        int age = currentYear - employees[i].birthYear;
        if (age > 60) {
            cout << "Прізвище: " << employees[i].surname << endl;
            cout << "Рік народження: " << employees[i].birthYear << endl;
            cout << "Посада: " << employees[i].position << endl;
            cout << "Зарплата: " << employees[i].salary << endl;
            cout << "Освіта: " << employees[i].education << endl;
            cout << "------------------------" << endl;
            ++count;
        }
    }
    cout << "Кількість працівників старших за 60 років: " << count << endl;
}