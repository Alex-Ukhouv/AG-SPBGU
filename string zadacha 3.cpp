// string zadacha 3.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
#include <iostream>
using namespace std;
int main() 
{
    char a;
    cin >> a;
    if (a >= 'a' && a <= 'z') a -= 32;
    else if (a >= 'A' && a <= 'Z') a += 32;
    cout << a;
    return 0;
}