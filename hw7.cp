#include <iostream>
using namespace std;

int main()
{
	int n, flag = 0, number = 2, i = 3;
	cout << "�п�J��Ƽƶq�G";
	cin >> n;
	int *ptr = new int(n);

	cout << "2" << " ";

	while (number <= *ptr)
	{
		flag = 0;
		for (int j = 2; j < i; j++)
		{
			if (i%j == 0)
			{
				flag = 1;
				break;
			}
		}
		if (flag == 0)
		{
			cout << i << " ";
			number++;
		}
		i++;
	}
	delete ptr;

system("pause");
return 0;
}


