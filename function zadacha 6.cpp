// function zadacha 6.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;

int main()
{


	int array[20] = {1,2,3,4,0,6,7,8,9,0};
	int sum = 0;
	int i = 0;
	do {
		sum = sum + array[i];
		i++;
	} while (array[i]);
	cout << sum;
}