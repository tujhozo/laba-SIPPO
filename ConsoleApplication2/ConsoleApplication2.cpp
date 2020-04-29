#include <iostream>
#include <math.h>
using namespace std;
void f1(int mas[], int n)
{
	int p = 0;
	cout << "masiv1" << endl;
	if (n % 2 == 1)
	{
		p = (n + 1) / 2;
		int *mas2 = new int[p];
		for (int j = 0; j < p; j++)
		{
			for (int i = 0; i < p; i++)
				mas2[i] = mas[j];
			cout << mas2[j] << endl;
		}
	}

	if (n % 2 == 0)
	{
		p = n / 2;
		int *mas2 = new int[p];
		for (int j = 0; j < p; j++)
		{
			for (int i = 0; i < p; i++)
				mas2[i] = mas[j];
			cout << mas2[j] << endl;

		}
	}
	int k = 0;
	cout << "masiv2" << endl;
	if (n % 2 == 1)
	{


		k = n;
		int *mas3 = new int[k];
		for (int j = (n + 1) / 2; j < k; j++)
		{
			for (int i = (n + 1) / 2; i < k; i++)
				mas3[i] = mas[j];
			cout << mas3[j] << endl;
		}
	}
	if (n % 2 == 0)
	{
		k = n;
		int *mas3 = new int[k];
		for (int j = n / 2; j < k; j++)
		{
			for (int i = n / 2; i < k; i++)
				mas3[i] = mas[j];
			cout << mas3[j] << endl;
		}
	}
}

int main()
{
	int n;
	cin >> n;
	int *mas = new int[n];
	for (int i = 0; i < n; i++)
	{
		cin >> mas[i];
	}
	f1(mas, n);

}
