#include<iostream>
using namespace std;
int main()
{
	const double PI = 3.14159;
	int r, h, v;
	cout << "Please input the r and h:";
	cin >> r >> h;
	v = PI * r * r * h / 3;
	cout << "v=" << v << endl;
	return 0;
}