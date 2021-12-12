// string zadacha 6.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
#include <iostream>
#include <string>
using namespace std;

int main()
{
    string a;
    string ma;
    
    int l = 0;
    int c = 0;
    getline(cin, a);

    for (int i = 0; a[i] != '\0'; i++) {
        c++;

        if (a[i] == ' ') {
            if (c > l) {
                l = c;
                ma = a.substr(i+1-l, l);
            }
            c = 0;
        }
    }

    cout << ma;
    return 0;
}