// string zadacha 2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
#include <iostream>
using namespace std;
int main() 
{
    char a;
    cin >> a;
    if (a >= 97 && a <= 122) a -= 32;
    cout << a;
    return 0;
}