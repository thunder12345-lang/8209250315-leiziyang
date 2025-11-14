#include<iostream>
using namespace std;
int main()
{
	const float x = 0.8;
	float avery;
	int y = 2, sum = 0;
	int n = 0;
	while (y<= 100)
	{
		sum = sum + y;
		n = n + 1;
		y = y * 2;
	}
	avery = x* sum / n;
	cout << "每天平均花费" << avery << "元" << endl;
	return 0;
}