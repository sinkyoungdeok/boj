#include<cstdio>
#include <iostream>
#include <cmath>
using namespace std;
int main() 
{
	int max_sum = 0;
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		int sum = 0;
		int check[7] = { 0 };
		int a, b, c;
		cin >> a >> b >> c;
		check[a]++;
		check[b]++;
		check[c]++;
		int z = 0;
		for (int j = 1; j < 7; j++)
		{
			if (check[j] == 3)
			{
				z = 1;
				sum += 10000 + j * 1000;
			}
			else if (check[j] == 2)
			{
				z = 1;
				sum += 1000 + j * 100;
			}
		}
		if (z == 0)
		{
			for (int j = 6; j > 0; j--)
			{
				if (check[j] == 1)
				{
					sum += j * 100;
					break;
				}
			}
		}
		if (max_sum < sum)
			max_sum = sum;

	}
	cout << max_sum << endl;
	return 0;
}
