// gcc -o fsb-write-eight-bytes fsb-write-eight-bytes.c -w -no-pie

#include <stdio.h>
#include <stdlib.h>

long secret = 0;

int main() {

	char buffer[0x100];

	printf("=> secret @ %p\n", &secret);
	printf("What is your name? ");
	fgets(buffer, 0x100, stdin);
	
	printf(buffer);

	if(secret == 0xdeadbeefdeadbeef) {
		printf("\n[*] Well done!\n");
		return 0;
	}
	printf("Nope! You wrote %llx\n", secret);
	return 1;
}
