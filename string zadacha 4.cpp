// string zadacha 4.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
#include <iostream>
#include <string>
using namespace std;

int main() 
{
    string a;
    bool nw = false;
    int c = 1;
    getline(cin, a);
    for (int i = 0; a[i] != '\0'; i++) {
        if (nw) {
            c++;
            nw = false;
        }
        if (a[i] == ' ') nw = true;
    }
    cout << c;
    return 0;
}