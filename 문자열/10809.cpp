//���ĺ� ã��
//���� �����ϋ��� ó�� ���ڷ�
#include <iostream> 
#include <cstring>
using namespace std;
int main()
{
	char str[100];
	int alp[26];
	cin >> str;

	for (int i = 0; i < 26; i++)
	{
		alp[i] = -1;
	}
	for (int i = 0; i < strlen(str); i++)
	{
		if (alp[str[i] - 'a'] == -1)
		{
			alp[str[i] - 'a'] = i;
		}
	}
	for (int i = 0; i < 26; i++)
	{
		cout << alp[i] << " ";
	}
}





