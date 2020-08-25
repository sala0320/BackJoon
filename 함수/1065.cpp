//ÇÑ¼ö
#include <iostream> 
using namespace std;
int main()
{
	int num, count = 0;
	int h, t, o;
	scanf("%d", &num);

	if (num < 100)
		printf("%d", num);
	else
	{
		for (int i = 100; i <= num; i++)
		{
			h = i / 100;
			t = (i / 10) % 10;
			o = i % 10;

			if (t - h == o - t)
				count++;
		}
		printf("%d", 99 + count);
	}
}




