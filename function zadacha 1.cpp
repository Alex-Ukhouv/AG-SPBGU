// function zadacha 1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <cmath>
using namespace std;
int distance(int x1, int x2, int y1, int y2) {
	int result = sqrt(pow((x1 - x2),2) + pow((y1 - y2),2));
	return result;
}
int main()
{
	int x1, x2, y1, y2;
	cout << "Enter x1, x2:\n";
	cin >> x1 >> x2;
	cout << "Enter y1,y2:\n";
	cin >> y1 >> y2;
	cout << distance(x1, x2, y1, y2);
}
