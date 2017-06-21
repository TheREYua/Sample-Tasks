#include<iostream>

using namespace std;

int main()
{
	int n, i;
	double x0{ 0 }, x1{ 0 }, eps{ 0.00001 };
	cout << "\nEnter n: ";
	cin >> n;
	cout << "\nEnter x1: ";
	cin >> x1;
	double *A = new double[n + 1];
	double *B = new double[n];
	for (i = 0; i < n + 1; ++i)
	{
		cout << "\nEnter A[" << i << "]: ";
		cin >> A[i];
		B[i] = A[i] * (n - i);
	}
	do
	{
		x1 = x0;
		double C = A[0];
		double Z = B[0];
		for (i = 1; i < n; ++i)
		{
			C = C*x0 + A[i];
			Z = Z*x0 + B[i++];
		}
		C = C*x0 + A[i];
		x1 = x1 - C / Z;
	} 
	while (abs(x0 - x1) > eps);
	cout << "\nx = " << x1 << endl;

	return 0;
}