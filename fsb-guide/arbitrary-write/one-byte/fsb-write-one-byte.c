// gcc -o fsb-write-two-bytes fsb-write-two-bytes.c -w -no-pie

#include <stdio.h>
#include <stdlib.h>

int secret = 0;

int main() {

	char buffer[0x100];

	printf("=> secret @ %p\n", &secret);
	printf("What is your name? ");
	fgets(buffer, 0x100, stdin);
	
	printf(buffer);

	if(secret == 0x37) {
		printf("Well done!\n");
		return 0;
	}
	printf("Nope!\n");
	return 1;
}
