// function zadacha 5.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
#include <iostream>

using namespace std;
int IsPrime(int n) {
    int i = 0;
    if (n<4){
        return true;
    }
    for (int i = 2; i < sqrt(n) + 2; i++) {
        if (n % i == 0) return false;
    }
    return true;
}
int main()
{
    int n;
    int a;
    cout << "Enter your value:\n";
    cin >> n;
    cout << "Is value prime?\n";
    a = IsPrime(n);
    if (a) {
        cout << "YES";
    }
    else {
        cout << "NO";
    }
}