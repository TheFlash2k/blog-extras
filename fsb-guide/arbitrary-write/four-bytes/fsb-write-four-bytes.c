// gcc -o fsb-write-four-bytes fsb-write-four-bytes.c -w -no-pie

#include <stdio.h>
#include <stdlib.h>

int secret = 0;

int main() {

	char buffer[0x100];

	printf("=> secret @ %p\n", &secret);
	printf("What is your name? ");
	fgets(buffer, 0x100, stdin);
	
	printf(buffer);

	if(secret == 0xdeadbeef) {
		printf("\n[*] Well done!\n");
		return 0;
	}
	printf("Nope! You wrote %d\n", secret);
	return 1;
}
