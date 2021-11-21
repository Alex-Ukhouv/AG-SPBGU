// massiv zadacha 4.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;
int main()
{
	int array[100][100];
	int n;
	cin >> n;
	for (int i=0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			array[i][j] =j-i;
			if (array[i][j] < 0) 
				array[i][j] = -array[i][j];
		}
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (array[i][j] < 10) 
				cout << " ";
			cout <<" "<< array[i][j];
		}
		cout << "\n";
}
}
