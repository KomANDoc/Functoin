#include <iostream>
using namespace std;

int add(int a, int b);
int sub(int a, int b);
double dev(int a, int b);
int mult(int a, int b); // прототип функции
int step(int a, int b);

void main()
{
	setlocale(LC_ALL, "Russian");
	int a, b;
	cout << "Введите а и b " << endl; cin >> a >> b;
	cout << a << " + " << b << " = " << add(a, b) << endl;// вызов функции 
	cout << a << " - " << b << " = " << sub(a, b) << endl;
	cout << a << " / " << b << " = " << dev(a, b) << endl;
	cout << a << " * " << b << " = " << mult(a, b) << endl;
	cout << a << " ** " << b << " = " <<step(a, b) << endl;
}

int add(int a, int b)
{
	int c = a + b;
	return c;
} 
int sub(int a, int b)
{
	return a - b;
}
double dev(int a, int b)
{
	return (a + 0.0000001) / (b + 0.0000001);
}
int mult(int a, int b)
{
	return a * b;
}
int step(int a, int b)
{
	int step = 0;
	if (b == 1)
	{
		step = a;
	}
	else if (b == 0)
	{
		step == 1;
	}
	else
	{
		for (int i = 1; i < b; i++)
		{
			step = step + a * a;
		}
		return step;
	}
}
// реализация функции