#include<iostream>
using namespace std;
int main()
{
	int a, b,t=1,yue=1,bei;
	cout << "Please input a,b:";
	cin >> a >> b;
	while (t <= a && t <= b)
		t++;
	if (a % t == 0 && b % t == 0)
		yue = t;
	bei = a/yue*b;
	cout << "最大公约数为" << yue << endl;
	cout << "最小公倍数为" << bei << endl;
	return 0;
}