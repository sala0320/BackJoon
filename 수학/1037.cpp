//���� �� �� �� �� �� ���� ���ϱ�

#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
	int num;
	int div[50];

	cin >> num;
	for (int i = 0; i < num; i++)
	{
		cin >> div[i];
	}
	sort(div, div + num);
	cout << div[0] * div[num - 1];
}





