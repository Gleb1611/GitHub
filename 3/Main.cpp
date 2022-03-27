#include <iostream>

using namespace std;

int main()
{

	int a, b;

	cout << "Input a, b and c:" << endl;
	cin >> a >> b;

	int max = 0;

	if (a > b && a > c)
	{
		max = a;
	}else
	{
		max = b;
	}

	cout << max << endl;

	return 0;
}
