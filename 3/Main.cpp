#include <iostream>

using namespace std;

int main()
{

	int a, b, c, d;

	cout << "Input a, b, c and d:" << endl;
	cin >> a >> b >> c >> d;

	int max = 0;

	if (a > b && a > c && a > d)
	{
		max = a;
	}
	
	else if (b > a && b > c && b > d)
	{
		max = b;
	}

	else if (c > a && c > b && c > d)
	{
		max = c;
	}

	else
	{
		max = d;
	}

	cout << max << endl;

	return 0;
}