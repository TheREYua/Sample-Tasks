#include <iostream>

using namespace std;

struct LIST
{
	int digit;
	LIST *next;
};

void main()
{
	LIST *p = 0;
	cout << "\n Enter integer number: ";
	int N;
	cin >> N;
	while (N != 0)
	{
		LIST *MyStack = new LIST;
		MyStack->digit = N%10;
		MyStack->next = p;
		p = MyStack;
		N /= 10;
	}
	while(p)
	{
		cout << p->digit;
		p = p->next;
	}
	cout << endl;
	system("pause");
}