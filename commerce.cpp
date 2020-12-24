#include <iostream>

using namespace std;

int main()
{
	int k;
	cout << "Enter k" << endl;
	cin >> k;
	double p;
	cout << "Enter percentage" << endl;
	cin >> p;
	int r;
	cout << "Enter the profit" << endl;
	cin >> r;
	int i;
	for (i = 0; k > 0; i++) {
		k *= (1 + p / 100);
		k -= r;
	}
	cout << i << " years" << endl;
	system("pause");
}