// gcc -o fsb-write-two-bytes fsb-write-two-bytes.c -w -no-pie

#include <stdio.h>
#include <stdlib.h>

int main() {

	int secret = 0;
	char buffer[0x100];

	printf("=> secret @ %p\n", &secret);
	printf("What is your name? ");
	fgets(buffer, 0x100, stdin);

	if(secret == 0x37) {
		printf("Well done!\n");
		return 0;
	}
	printf("Nope!\n");
	return 1;
}a