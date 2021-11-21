// massiv zadacha 2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;
int main()
{
    int n, m;
    int nmx, mmx;
    int max;
    int array[100][100];
    cin >> n;
    cout << "\n";
    cin >> m;
    cout << "\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> array[i][j];
        }
    }
    max = array[0][0];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (array[i][j] > max) {
                max = array[i][j];
                nmx = i;
                mmx = j;

           }
        }
    }
    cout << "Max for N: " << nmx<<"\n";
    cout << "Max for M: " << mmx;
    return 0;
}

