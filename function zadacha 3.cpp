// function zadacha 3.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;
int power(int a, int n);
int main()
{
	int a, n;
	cout << "Enter value:\n";
	cin>> a;
	cout << "Enter degree:\n";
	cin>> n;
	cout << power(a, n);
}
int power(int a, int n) {
	int f;
	if (n == 0) {
		f = 1;
		return f;
	}
	else {
		if (n == 1) {
			f = a;

		}
		else {
			f = a * power(a, n - 1);
		}
		return f;
	}
	
}


