#include <iostream>
using namespace std;
int main()
{
	int a;
	cout << "Enter a number: \n";
	cin >> a;
	if (a>0)
	{
		cout << "Number is positive!!";
	}
	else if (a<0)
	{
		cout << "Number is negative! ";
	}
	else if (a==0)
	{
		cout << "Number is zero! ";
	}
	return 0;
}