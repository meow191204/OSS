#include <stdio.h> 
int main() 
{

	int i, j, n;

	for (i = 2; i <= 100; i++) 
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
	return 0;
}
