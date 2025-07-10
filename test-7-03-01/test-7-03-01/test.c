#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	int a = 10;
	int b = 20;
	int c = 30;
	// Print the values of a, b, and c
	printf("a: %d, b: %d, c: %d\n", a, b, c);
	// Print the addresses of a, b, and c
	printf("&a: %p, &b: %p, &c: %p\n", (void*)&a, (void*)&b, (void*)&c);
	return 0;
}