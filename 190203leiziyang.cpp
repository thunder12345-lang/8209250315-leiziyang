#include<iostream>
using namespace std;
int main()
{
	int x, y, z,zhou;
	cout << "Please input x,y,z:";
	cin >> x >> y >> z;
	x + y >= z || x + z >= y || y + z >= x;
	zhou = x + y + z;
	cout << "周长为" <<zhou<< endl;
	if (x == y || x == z || y == z)
		cout << "该三角形为等腰三角形" << endl;
	return 0;
}