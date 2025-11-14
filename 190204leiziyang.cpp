#include<iostream>
using namespace std;
int main()
{
	int x, y;
	char op;
	cin >> x >> op >> y;
	switch (op)
	{
	case '+':
		cout << "x+y=" << x + y << endl;
		break;
	case'-':
		cout << "x-y=" << x - y << endl;
		break;
	case'*':
		cout << "x*y=" << x * y << endl;
		break;
	case'/':
		cout << "x/y=" << x / y << endl;
		break;
	case'%':
		cout << "x%y=" << x % y << endl;
		return 0;
	}

}