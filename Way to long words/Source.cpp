#include <iostream>
#include <string>
using namespace std;

int main()
{
	int n;
	string word[100];
	int size[100];
	cin >> n;
	for (int i = 0; i < n; i++)
		{
		cin >> word[i];
		}

	for (int j = 0; j < n; j++)
	{
		size[j] = word[j].length();
		if (size[j] <= 10)
			cout << word[j] << endl;
		else
			{
			cout << word[j][0] << size[j] - 2 << word[j][size[j] - 1] << endl;
			}


	}
	






	return 0;
}