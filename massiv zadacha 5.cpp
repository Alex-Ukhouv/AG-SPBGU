// massiv zadacha 5.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;
int main()
{
	int array[100][100];
	int n, m;
	int k, l;
	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> array[i][j];
		}
	}
	
	for(int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cout << array[i][j]<<" ";
}
		cout << "\n";
	}
	cout << "Wich collums should be switched:\n";
	
	do {
		cin >> k >> l;
		if ((k >= n) || (l >= m))
			cout << "Wrong numbers\n";
	} while ((k >= n) || (l >= m));
	int c;
	for (int i = 0; i < n; i++) {
		c = array[i][k];
		array[i][k] = array[i][l];
		array[i][l] = c;
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cout << array[i][j] << " ";
		}
		cout << "\n";
	}
}
