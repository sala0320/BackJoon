//strlen for���� ������ �ð��ʰ� �����Ƿ� int len���� �����صα�

#include <iostream> 
#include <cstring>
#define MAX 1000000
using namespace std;
int main()
{
	char str[MAX];
	int alph[26] = { 0 };
	int max = 0, same = 0, maxNum;

	cin >> str;
	int len = strlen(str);

	for (int i = 0; i < len; i++)
	{
		if (str[i] >= 97 && str[i] <= 122)
		{
			alph[str[i] - 97]++;
		}
		else
		{
			alph[str[i] - 65]++;
		}
	}
	for (int i = 0; i < 26; i++)
	{
		if (max < alph[i])
		{
			max = alph[i];
			maxNum = i;
			same = 0;
		}
		else if (max == alph[i])
		{
			same++;
		}
	}
	if (same > 0)
		printf("?");
	else
		printf("%c", maxNum + 65);
}





