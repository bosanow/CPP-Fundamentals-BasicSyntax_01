/*Write a program that reads two integers from the console and prints them in increasing order.
*/

#include <iostream>
using namespace std;

int main()
{
	int num1, num2;
	cin >> num1 >> num2;

	if (num1 > num2) 
	{
		cout << num2 << " " << num1 << endl;
	}
	else
	{
		cout << num1 << " " << num2 << endl;
	}

	return 0;
}

