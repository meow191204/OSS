#include<stdio.h>
int main()
{
	int n = 0;
    int i = 100;

	for (int i = 2; n <= 100; n++)
	{
		for (int i = 2; n < i; n++)
		{
			//나눠 떨어졌으면 1과 n사이의 수인 약수가 있다는 말이다. hasDiv변수를 true로 설정해주자.
			if (i % n == 0) 
            {
				n = 1;
				break;
			}
		}

		if (!n)
		{
			printf("%d\n", i);
		}
		n = 0;
	}
}
