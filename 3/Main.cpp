#include <iostream>

using namespace std;

int main()
{

	int a, b, c;

	cout << "Input a, b and c:" << endl;
	cin >> a >> b >> c;

	int max = 0;

	if (a > b && a > c)
	{
		max = a;
	}else if (b > a && b > c)
	{
		max = b;
	}

	else
	{
		max = c;
	}

	cout << max << endl;

	return 0;
}