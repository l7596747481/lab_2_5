#include "RightAngled.h"

int main()
{
	Pair a;
	cin >> a;
	cout << "\nProduct = " << a.Product() << '\n';

	cout << ++a << '\n';
	cout << --a << '\n';
	cout << a++ << '\n';
	cout << a-- << '\n';

	RightAngled b;
	cin >> b;
	cout << "\nArea of triangle = " << b.Area() << '\n';
	cout << "Hypotenuse of triangle = " << b.Hypotenuse() << '\n';
	cout << b;
	cout << "Size of class = " << sizeof(b);

	cin.get();
	cin.get();
	return 0;
}