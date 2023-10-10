#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
	double x, xp, xk, dx, a, b, c, F;

	cout << "xp = "; cin >> xp;
	cout << "xk = "; cin >> xk;
	cout << "dx = "; cin >> dx;
	cout << "a = "; cin >> a;
	cout << "b = "; cin >> b;
	cout << "c = "; cin >> c;
 
	cout << fixed;
	cout << "---------------------------" << endl;
	cout << "|" << setw(7) << "x" << " |"
		<< setw(9) << "F" << " |" << endl;
	cout << "---------------------------" << endl;

	x = xp;

	while (x <= xk)
	{
		if (x < 1 && x != b)
			F = a * pow(x, 2) + b;
		else if (x > 1 && x == -b)
			F = (x - a) / x;
		else
			F = x / c;
		
		cout << "|" << setw(7) << setprecision(2) << x
			<< " |" << setw(10) << setprecision(3) << F
			<< " |" << endl;

		x += dx;
 	}
	cout << "---------------------------" << endl;
	return 0;
}