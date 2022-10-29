#include <iostream>
using namespace std;
int main() {
	/*int x;
	int k = 0;
	int sum = 0;
	do {
		cin >> x;
		k++;
		sum += x;
	} while (x != 0);
	double sr = (double)sum / k;
	cout << k << " " << sum << " " << sr << endl;*/

	/*int a, b, i, sum = 0;
	cin >> a >> b;
	i = a;
	do {
		if (i % 2 != 0) {
			sum += i;
	}
		i += 1;
	} while (i <= b);
	cout << sum;*/

	//нарисовать равнобедренный треугольник из символов ^
	/*int i, h;
	cin >> h;
	i = 1;
	do {
		for (int j = 1; j <= h - i; j++) cout << ' ';
		for (int j = 1; j <= 2 * i - 1; j ++) cout << '^';
		cout << endl;
		i++;
	} while (i <= h);*/

	//17.В ЭВМ вводятся по очереди данные о росте N учащихся класса.Определить средний рост учащихся класса.
	/*int n, sum, k, i = 1;
	sum = 0;
	cin >> n;
	do {
		cin >> k;
		sum += k;
		i++;
	} while (i <= n);
	double sr = (double)sum / n;
	cout << sr;*/

	//22. дано натуральное n. вычислить: 1 + 1/2 + 1/3 + 1/4 + ... + 1/n.
	int n, k = 0, i = 1;
	cin >> n;
	do {
		if (i <= n && n % 2 == 2 && n % 2 == 3 && n % 2 == 5) {
			k++;
		}
		i++;
	} while (i <= n);
	cout << k;
}