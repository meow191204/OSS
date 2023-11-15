#include<stdio.h>

int main() {
	int t;
	scanf("%d", &t);

	int a, b;
    // i를 0부터 시작해서 i < t로 놔야함
	for (int i = 0; i < t; ++i) {
		scanf("%d %d", &a, &b);
		printf("%d\n", a + b);
	}

	return 0;
}