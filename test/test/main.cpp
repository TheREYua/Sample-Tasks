#include<iostream>
#include<fstream>
using namespace std;

int main()
{
	ifstream fin("f.txt");
	ifstream gin("g.txt");
	ofstream ff("gg.txt");
	int n1{ 0 }, n2{ 0 };
	if (fin.is_open && gin.is_open)
	{
		fin >> n1; gin >> n2;
	
	while ((!fin.eof()) || (!gin.eof()))
	{
		while ((!fin.eof()) && (n1 < n2))
			ff << n1 << " "; fin >> n1;
		while ((!gin.eof()) && (n2 < n1))
			ff << n2 << " "; gin >> n2;
		if (n1 == n2)
			{
				ff << n1 << " ";
				fin >> n1;
				gin >> n2;
			}
		else
			if ((fin.eof()) && (n1 < n2))
		{
			ff << n1 << " ";
			fin >> n1;
			while (!gin.eof())
			{
				ff << n2 << " ";
				gin >> n2;
			}
		}
			else if ((gin.eof()) && (n2 < n1))
			{
				ff << n2 << " ";
				gin >> n2;
				while (!fin.eof())
				{
					ff << n1 << " ";
					fin >> n1;
				}
			}
		}
}
	else
		cout << "\nFiles not found";




	system("pause");
}