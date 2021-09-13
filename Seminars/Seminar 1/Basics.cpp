#include <iostream>
using namespace std;
int main(){
	setlocale(LC_ALL, "Russian");
	// int - целые числа, float/double - рациональные числа, char - символы, bool - 0 и 1
	int a, count = 0;
	// сin >> - ввод информации, cout << - вывод информации 
	cin >> a;
	cout << a << endl; // endl - перевод строки
	// + - сложение, - - вычитание, * - умножение, / - деление, % - остаток от деление | abs() - модуль, sqrt() - корень
	a = a + 1; // a += 1, a++
	cout << a << " ";
	a = a + 10;  // a += 10
	cout << a << endl;
	// >, >=, <, <=, ==, !=
	if (a < 13) {
		a += 10;
		cout << a << endl;
	}
	else if (a > 25) {
		a *= 10;
		cout << a << endl;
	}
	else
		cout << a + 10 << endl;
	while (a<50) {
		a += 10;
		count++;
	}
	cout << a << " " << count;
	return 0;
}