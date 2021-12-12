// string zadacha 1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
#include <iostream>
using namespace std;
int main() 
{
    char a;
    cin >> a;
    if (a >= 48 && a <= 57) cout << "Yes";
    else cout << "No";
    return 0;
}