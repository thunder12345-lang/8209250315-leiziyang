#include<iostream>
using namespace std;
int main()
{
	double a;
	cout << "Please input a:";
	cin >> a;
	double xn = a,xn1=0.5*(a+1);
	double cha = xn1 - xn;
	const double jingdu = 1e-5;
	do {
		xn = xn1;
		xn1 = 0.5 * (xn + a / xn);
		cha = xn1 - xn;
	} while (cha >= jingdu);
	cout << "a的平方根为" << xn1 << endl;
	return 0;
}




#include<iostream>
using namespace std;
int main()
{
	double a;
	cout << "Please input a:";
	cin >> a;
	if (a < 0)
		cout << "错误，输入值不能为负数" << endl;
	double xn = a, xn1 = 0.5 * (a + 1);
	double cha = xn1 - xn;
	const double jingdu = 1e-5;
	do {
		xn = xn1;
		xn1 = 0.5 * (xn + a / xn);
		cha = xn1 - xn;
	} while (cha >= jingdu);
	cout << "a的平方根为" << xn1 << endl;
	return 0;
}