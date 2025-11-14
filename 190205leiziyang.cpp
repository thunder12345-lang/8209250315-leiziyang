#include<iostream>
using namespace std;
int main()
{
	char c;
	int letters = 0, kong = 0, shu = 0, others = 0;
	cout << "请输入一行字符：" << endl;
	while (cin.get(c) && c != 'n')
	{
		if (isalpha(c))letters++;
		if (isdigit(c))shu++;
		if (c == ' ')kong++;
		else others++;
	}
	cout << "字母个数为" << letters << endl;
	cout << "数字个数为" << shu << endl;
	cout << "空格个数为" << kong << endl;
	cout << "其他为" << others << endl;
	return 0;
}