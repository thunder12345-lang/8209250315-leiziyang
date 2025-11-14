#include<iostream>
using namespace std;
int main()
{
	int x, y;
	cout << "Please input x,y:";
	cin >> x >> y;
	if (x > 0 && x < 1)
		y = 3 - 2 * x;
	if (x >= 1 && x < 5)
		y = 2 / (4 * x) + 1;
	else if (x >= 5 && x < 10)
		y = x * x;
	cout << "y=" << y << endl;
	return 0;
}