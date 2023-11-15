#include<stdio.h>
void is_prime(int max)
{
    int i, j, n;

	for (i = 2; i <= max; i++) 
    {
    	
		n = 1;
		for (j = 2; j < i; j++) 
        {
			if (i % j == 0) 
            {
				n = 0;
				break;
			}
		}
		if (n == 1) 
        {	
			printf("%d ", i);
		}
	}
}
int main()
{
    int max;
    printf("최대 범위를 입력하시오 : ");
    scanf("%d",&max);
    is_prime(max);
    return 0;

}