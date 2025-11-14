#include<iostream>
using namespace std;
int main()
{
	double testUnint;
	cin >> testUnint;
	int result = static_cast<int>(testUnint);
	cout << "Output in int type:" << testUnint << endl;
	return 0;
}