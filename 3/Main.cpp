#include <iostream>

using namespace std;

int main()
{

<<<<<<< HEAD
	int a, b, c, d;

	cout << "Input a, b, c and d:" << endl;
	cin >> a >> b >> c >> d;
=======
	int a, b;

	cout << "Input a, b and c:" << endl;
	cin >> a >> b;
>>>>>>> 47c740fa988d82654ba1845e14f5f08fe374cad3

	int max = 0;

	if (a > b && a > c && a > d)
	{
		max = a;
<<<<<<< HEAD
	}
	
	else if (b > a && b > c && b > d)
=======
	}else
>>>>>>> 47c740fa988d82654ba1845e14f5f08fe374cad3
	{
		max = b;
	}

<<<<<<< HEAD
	else if (c > a && c > b && c > d)
	{
		max = c;
	}

	else
	{
		max = d;
	}

=======
>>>>>>> 47c740fa988d82654ba1845e14f5f08fe374cad3
	cout << max << endl;

	return 0;
}
