#include <iostream>
using namespace std;

int main()
{
	setlocale(0, "");
	int a = 0, b = 0, c = 0, max = 0, min = 0, srednee = 0;
	cout << "Введите три числа: \n";
	cin >> a >> b >> c;
	//
	if (a > b)
		max = a;
	else max = b;
	if (c > max)
		max = c;
	//
	if (a < b)
		min = a;
	else min = b;
	if (c < min)
		min = c;
	//
	if (a != max && a != min)
		srednee = a;
	if (b != max && b != min)
		srednee = b;
	if (c != max && c != min)
		srednee = c;
	cout << "Числа в порядке возрастания: \n" << min << " " << srednee << " " << max << endl;
	system("pause");
	return 0;
}
