// massiv zadacha 3.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;
int main()
{
	char zvezda[15][15];
	int n,z;
	cin >> n;
	for (int i = 0; i < n;i++) {
		for (int j = 0; j < n; j++) {
			zvezda[i][j] = 'o';
		}
	}
	z = n / 2;
	for (int j = 0; j < n; j++) {
		zvezda[z][j] = '*';
	}
	for (int i = 0; i < n; i++) {
		zvezda[i][z] = '*';
	}
	for (int i = 0; i < n; i++) {
		zvezda[i][i] = '*';
	}
	for (int i = 0,  j = n-1; i < n; i++, j--) {
		zvezda[i][j] = '*';
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cout << zvezda[i][j]<<" ";
		}
		cout << "\n";
	}
}
