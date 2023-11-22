#include <iostream>
using namespace std;
int main()
{
	int n, a = 0, b = 1;
	cin >> n;
	cout << a << endl << b << endl;
	for (int i = 1; i < n-1; i++)
	{
		cout << a + b << endl;
		int z = b;
		b = a + z;
		a = z;
	}
}