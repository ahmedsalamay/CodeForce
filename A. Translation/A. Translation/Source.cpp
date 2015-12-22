#include<iostream>
#include<string>
using namespace std;
int main()
{
	string s,str;
	cin >> s;
	cout << endl;
	cin >> str;
	int n = 0;
	for (int i = 0; i < s.size(); i++)
	{
	
		if (s[i] == str[s.size() - 1 - i])
			n++;
	}
	if (n == s.size())
		cout << "YES";
	else
		cout << "NO";
	return 0;
	


}