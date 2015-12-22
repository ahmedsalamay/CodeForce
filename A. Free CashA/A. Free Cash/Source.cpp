#include<iostream>
using namespace std;
int main()
{
	int p,c=0;
	cin >> p;
	int *h = new int[p];
	int *m = new int[p];
	for (int i = 0; i < p; i++)
	{
		cin >> h[i];
		cin >> m[i];
	}
	for (int i = 0; i < p; i++)
	{
		if ((h[i] + m[i]) == (h[i + 1] + m[i + 1]))
			c++;

	}
	cout << c+1;
	delete[]h;
	h = 0;
	delete[]m;
	m = 0;
	return 0;
}
