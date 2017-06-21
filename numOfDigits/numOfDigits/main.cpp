#include<iostream>
using namespace std;

int main()
{
	int arr[10], counter{ 0 };
	unsigned int N;
	cout << "Enter the number: " << endl;
	cin >> N;
	for (int i = 0; i < 10; ++i)
		arr[i] = 0;
	while (N)
	{
		int num = N % 10;
		arr[num]++;
		N /= 10;
	}
	for (int i = 0; i < 10; ++i)
	{
		if(arr[i] != 0)
			counter++;
	}
	cout << endl <<  counter << endl;
	system("pause");
	return 0;
}