﻿// register.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//Напишите программу, которая позволяет пользователю ввести в консоли латинскую букву нижнего регистра,  переводит её в верхний регистр и результат выводит в консоль. 

#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "RU");
    
    char a;
    cout << "Введите латинскую букву в нижнем регистре: ";
    cin >> a;

    a -= 32;

    cout << "Та же буква в верхнем регистре: " << a << endl;

    return 0;
}


