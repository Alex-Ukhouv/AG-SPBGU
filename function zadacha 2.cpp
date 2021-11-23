// function zadacha 2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <cmath>
using namespace std;
int IsPointInCircle(int x, int y, int xc, int yc, int r) {
	int d = sqrt(pow((xc - x), 2) + pow((yc - y), 2));
	return r/d;
}
int main()
{
	int x, y, xc, yc, r, d, result;
	cout << "Enter point coordinates:\n";
	cin >> x >> y;
	cout << "Enter circle centre coordinates:\n";
	cin >> xc >> yc;
	cout << "Enter circle radius:\n";
	cin >> r;
	result = IsPointInCircle(x, y, xc, yc, r);
	if (result) {
		cout << "YES";
	}
	else {
		cout << "NO";
	}

	return 0;
}
