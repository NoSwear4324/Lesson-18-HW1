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

    Employee emp;
    emp.surname = "Іванов";
    emp.birthYear = 1990;
    emp.position = "Інженер";
    emp.salary = 15000.0;
    emp.education = "Вища";

    cout << "Прізвище: " << emp.surname << endl;
    cout << "Рік народження: " << emp.birthYear << endl;
    cout << "Посада: " << emp.position << endl;
    cout << "Зарплата: " << emp.salary << endl;
    cout << "Освіта: " << emp.education << endl;
}