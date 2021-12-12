// string zadacha 5.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <string>
using namespace std;

int main()
{
    string a;
    bool na = true;
    int c = 1;
    getline(cin, a);
    int l;
    l = a.length();

    for (int i = 0; i<(l/2); i++) {
        if (a[i] != a[l-i-1]) {
            
            na = false;
        }
        
    }
    if (na) {
        cout << "Yes, this is POLINDROM";
    }
    else {
        cout << "No, this is not POLINDROM";
    }
    return 0;
}