// massiv zadacha 1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    double *array = new double[n];

    array[0] = 0;
    array[1] = 1;

    for (int i = 2; i < n; i++) {
        array[i] = array[i - 1] + array[i - 2];
    }
    cout << array[n - 1];
    delete[]array;
    return 0;
}