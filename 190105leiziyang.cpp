#include<iostream>
using namespace std;
int main()
{
	float F, c;
	cout << "Please input F:";
	cin >> F;
	c =(F - 32) / 1.8;
	cout << "C=" << c << endl;
	return 0;
}