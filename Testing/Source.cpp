#include<iostream>

using namespace std;

int main()
{
	int num;
	int base;
	int binNum = 0;
	cin >> num;
	base = 2;
	while (num > 0)
	{
		num = num / base;
		binNum = num % base;
		cout << binNum;
	}
	return 0;
 }