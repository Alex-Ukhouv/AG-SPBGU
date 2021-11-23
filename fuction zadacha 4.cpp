// fuction zadacha 4.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

using namespace std;
int MinDivisor(int n) {
    int i=0;
    for (int i = 2; i < sqrt(n) + 2; i++) {
        if (n % i == 0) return i;
    }
    return n;
}
int main()
{
    int n;
    int a;
    cout << "Enter your value:\n";
    cin >> n;
    cout << "Result:\n";
    a = MinDivisor(n);
    cout << a;
}